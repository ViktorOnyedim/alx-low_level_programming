/* #include <stdlib.h>
#include <time.h> */
#include <stdio.h>
#include "main.h"

/**
 * main - check whether random number is negative, positive or zero
 *
 * Return: void
 */

void positive_or_negative(int i)
{
	/*int n;*/

	/*srand(time(0));*/
	/*n = rand() - RAND_MAX / 2;*/
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
