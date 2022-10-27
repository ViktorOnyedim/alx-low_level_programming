#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to concatenate
 *
 * return: Pointer resulting string "dest"
 */

char *_strcat(char *dest, char *src)
{
	char *p1, *p2;

	p1 = dest;
	while (*p1 != '\0')
		p1++;
	p2 = src;
	while (*p2 != '\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	return (dest);
}
