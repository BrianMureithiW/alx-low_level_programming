#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Positive_or_negative - Prints a string.
 *
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	/*n = rand() - RAND_MAX / 2;*/
	n = i;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
