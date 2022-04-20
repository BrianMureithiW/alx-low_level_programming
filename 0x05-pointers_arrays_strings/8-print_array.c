#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: A pointer to an int
 * @n: return value n
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
