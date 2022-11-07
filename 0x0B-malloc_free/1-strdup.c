#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer to a newly allocated space in memory
 * which contains a copy of the string given as parameter
 *
 * @str: String to be duplicated
 *
 * Return: pointer to the duplicated string
 * NULL if insufficient memory was available or if str = NULL
 */

char *_strdup(char *str)
{
	static char *ptr;
	char *ptr_offset;
	int str_size, i;

	i = 0;
	while (str[i] != '\0')
		i++;
	str_size = i;

	ptr = (char *)malloc(sizeof(char) * str_size + 1);

	if (str == NULL)
		return (NULL);

	ptr_offset = ptr;
	while (*str)
	{
		*ptr_offset = *str;
		ptr_offset++;
		str++;
	}
	*ptr_offset = '\0';

	return (ptr);
}
