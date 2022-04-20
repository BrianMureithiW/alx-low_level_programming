#include "main.h"

/**
 * _puts - prints a string
 * @str: Apointer to an int that will be changed
 *
 * Return: void which means the answer is correct
 */

void _puts(char *str)
{
	char *d;
	int n;

	d = str;

	for (n = 0; d[n]; n++)
	{
		_putchar(d[n]);
	}
	_putchar('\n');
}
