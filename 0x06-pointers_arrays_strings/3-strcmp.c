#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: 0 if s1 and s2 are equal,
 * another number if not.
 */

int _strcmp(char *s1, char *s2)
{
	int counter, cmp_val;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;
	cmp_val = s1[counter] - s2[counter];
	return (cmp_val);
}
