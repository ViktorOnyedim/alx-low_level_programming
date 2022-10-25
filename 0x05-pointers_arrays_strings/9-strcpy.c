#include "main.h"

/**
 * *_strcpy - Copies string pointed to by src
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
