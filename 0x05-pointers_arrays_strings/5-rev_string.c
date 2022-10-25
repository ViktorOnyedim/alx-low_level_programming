#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: input string
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int len, count, i;
	char *start, *end, temp;

	count = 0;
	while (s[count] != '\0')
		count++;
	len = count;

	start = s;
	end = s;
	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
