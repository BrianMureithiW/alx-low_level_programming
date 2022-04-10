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

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');

	return (0);
}
