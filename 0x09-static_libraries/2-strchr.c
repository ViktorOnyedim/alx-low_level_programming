#include "main.h"
#define NULL 0

/**
 * _strchr - Locates a character in a string
 * @s: Input string
 * @c: Character to be found
 *
 * Return: Pointer to 1st occurence of @c in str @s or NULL if char not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
