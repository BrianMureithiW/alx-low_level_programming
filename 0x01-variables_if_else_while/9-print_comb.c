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
	for ((num %100)+ '0');
	{
		putchar((num % 10) +'0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');

	return (0);
}
