#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for a program
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j;
	time_t t;

	srand((unsigned int) time(&t));
	i = 0;
	for (j = 0; j < 2772; j += i)
	{
		i = rand() % 128;
		if ((j + i) > 2772)
			break;
		printf("%c", i);
	}
	printf("%c\n", (2772 - j));
	return (0);
}
