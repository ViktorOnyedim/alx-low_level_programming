#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to concatenated string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;
	unsigned int i, j, k, limit, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0; 
	while (s1[i] != '\0')
		i++;

	j = 0; 
	while (s2[j] != '\0')
		J++;

	size = (i + j + 1);

	cat = (char *)malloc(size * sizeof(char));

	if (cat == 0)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(cat+i) = *(s1 + 1);
		i++;
	}

	return (cat);
}
