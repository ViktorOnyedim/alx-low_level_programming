#include "main.h"

/**
 * power_operation - Finds the square root of two numbers
 * @x: The number
 * @y: The number
 * Return: -1 if n doesnt have a natural square root
 * Otherwise return the natural square root of the number.
 */

int power_operation(int x, int y)
{
	if (y * y > x)
		return (-1);

	else if (y * y == x)
		return (y);

	else
		return (power_operation(x, y + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number to return the square root of
 *
 * Return: The natural square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (power_operation(n, 1));
