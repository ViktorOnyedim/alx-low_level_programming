#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @seperator: delimiter (string to be printed between numbers)
 * @n: number of arguments to be printed
 *
 * Return: Nothing.
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		printf("%d", x);
		if (seperator != NULL)
		{
			printf("%s", seperator);
		}
	}
	va_end(args);
	printf("\n");
}
