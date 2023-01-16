#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Finds the first occurence of a substring in a string
 * @haystack: Input string
 * @needle: substring to be found
 *
 * Return: Pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int strlen;
	int sublen;
	int i, j;

	strlen = 0;
	sublen  = 0;
	while (haystack[strlen] != '\0')
		strlen++;
	while (needle[sublen] != '\0')
		sublen++;

	/* `needle` is NULL or empty */
	if (*needle == '\0' || sublen == 0)
		return (NULL);

	/* `haystack` is NULL or haystack length < needle length */
	if (*haystack == '\0' || sublen > strlen)
		return (NULL);

	/* `next[i]` stores the index of the next best partial match */
	int next[sublen + 1];
	for (i = 0; i < sublen + 1; i++)
		next[i] = 0;

	for (i = 1; i < sublen; i++)
	{
		j = next[i + 1];
		while (j > 0 && needle[j] != needle[i])
			j = next[j];
		if (j > 0 || needle[j] == needle[i])
			next[i + 1] = j + 1;
	}
	for (i = 0, j = 0; i < strlen; i++)
	{
		if (haystack[i] == needle[j])
		{
			if (++j == sublen )
			{
				return (haystack + i - j + 1);
			}
		}
		else if (j > 0)
		{
			j = next[j];
			i--;
		}
	}
	return (NULL);
}
