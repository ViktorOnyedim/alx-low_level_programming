#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String to be encoded
 *
 * Return: Pointer to encoded string
 */

char *leet(char *s)
{
	int count, i;
	char low_letters[] = "aeotl";
	char up_letters[] = "AEOTL";
	char numbers[] = "43071";

	for (count = 0; s[count] != '\0'; count ++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[count] == low_letters[i] || s[count] == up_letters[i])
			{
				s[count] = numbers[i];
				break;
			}
		}
	}
	return (s);
}
