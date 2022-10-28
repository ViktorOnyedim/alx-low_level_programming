#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: Pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;
	while (dest[length] != '\0')
		length++;
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}
