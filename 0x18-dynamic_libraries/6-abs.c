#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: value for which we want to find the absolute value.
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	return (n);
}
