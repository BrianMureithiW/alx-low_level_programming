#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints digit
 *
 * Return: 0
 */

int main(void)
{
/*declaration*/

	int n;
	char L;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (L = 'a'; L = 'f'; L++)
	{
		putchar(L);
	}
	putchar('\n');

	return (0);
}
