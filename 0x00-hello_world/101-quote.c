#include <unistd.h>

/**
 * main- Entry point
 * Description: Prints a string to the standard error
 * Return: 1 if program runs successfully
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n", 59);
	return (1);
}
