#include <stdlib.h>

#include <time.h>

/* more headers goes there */
#include <stdio.h>


/* betty style doc for function main goes there */
/*
 * main - prints the last digit of a randomly generated number and states whether it is greater than 5 less than 6 or zero
 *
 *Return always 0.
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	int last_digit = (n % 10)
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit <6 && last_digit !=0)
		printf("last_digit of %d is %d and is less than 6and not 0\n", n, last_digit);
	return(0);

}
