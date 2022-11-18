#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @seperator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: Nothing.
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
		{
			string = "(nil)";
		}
		printf("%s", string);
		if (seperator != NULL && i != n - 1)
		{
			printf("%s", seperator);
		}
	}
	va_end(args);
	printf("\n");
}
