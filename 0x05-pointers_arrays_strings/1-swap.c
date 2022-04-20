#include "main.h"

/**
 * swap_int - swap value of two integers
 * @a: an input integer pointer
 * @b: an input integer pointer
 * return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
