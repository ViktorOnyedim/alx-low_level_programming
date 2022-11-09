#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: pointer parameter
 *
 * Return: integer value
 */

int _atoi(char *s)
{
	unsigned int count, size, i, j, k, m;

	count = 0;
	size = 0;
	j = 0;
	k = 1;
	m = 1;
	i;

	while (s[count] != '\0')
	{
		if (size > 0 && (s[count] < '0' || s[count] > '9'))
			break;

		if (s[count] == '-')
			k *= -1;

		if(s[count] >='0' && s[count] <= '9)
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		j = j + ((s[i] - 48) * m);
		m /= 10;
	}
	return (j * k);
}
