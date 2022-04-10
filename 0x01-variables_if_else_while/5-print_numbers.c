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

	char digit;

	for (digit = 0; digit <= 10; digit++)
	{
		printf("%d", digit);
	}
	putchar('\n');

	return (0);
}
