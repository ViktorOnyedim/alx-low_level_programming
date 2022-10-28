#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: Input string
 *
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* check if first character is lowercase alphabet*/
		if (i == 0)
		{
			if ((s[i] >= 'a') && (s[i] <= 'z'))
			{
				s[i] -= 32;
				continue;
			}
		}
		if (s[i] == '\t')
			s[i] = ' ';
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
			|| s[i] == ',' || s[i] == ';' || s[i] == '.'
			|| s[i] == '!' || s[i] == '?' || s[i] == '"'
			|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
			{
				s[i + 1] -= 32;
				continue;
			}
		}
	}
	return (s);
}
