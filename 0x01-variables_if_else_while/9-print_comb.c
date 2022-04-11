#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: 0
 */

int main(void)
{
/*declaration*/

	int num;
	for (num = 0; num <= 9; num++)
	{
		putchar(num);
		if (num == 9)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
