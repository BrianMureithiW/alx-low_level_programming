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

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');

	return (0);
}
