#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: Number of bytes from source
 *
 * Return: Pointer to the resulting string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
