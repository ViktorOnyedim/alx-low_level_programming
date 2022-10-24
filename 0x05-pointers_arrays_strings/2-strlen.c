#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: pointer to the null-terminated string to be scanned
 *
 * Return: Number of characters that precedes the terminating null character.
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}
