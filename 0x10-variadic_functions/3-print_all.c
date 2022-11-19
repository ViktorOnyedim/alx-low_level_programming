#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int j, format_len = strlen(format);
	char *string;

	va_start(args, format);
	j = 0;
	while (j < format_len)
	{
		switch (format[j])
		{
			case 'c': 
				printf("%c", va_arg(args, int));
			break;
			case 'i':
				printf("%d", va_arg(args, int));
			break;
			case 'f':
				printf("%f", va_arg(args, double));
			break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
			break;
			default:;
		}
		if ((j != (format_len - 1)) && (format[j] == 'c' || format[j] == 'i'
					|| format[j] == 'f' || format[j] == 's'))
		{
			printf(", ");
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
