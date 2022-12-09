#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * last_digit - prints the category of the last digit
 * @n: integer n
 *
 * Description: @TODO
 * Return: none
 */

/* betty style doc for function main goes there */

void last_digit(int n)
{
	int last;

	last = n % 10;
	if (last == 0)
	{
		printf("Last digit of %d is 0 and is %d\n", n, last);
	}
	else
	{
		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
		else if ((last < 6) && (last != 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	}
}

/**
 * main - code entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit(n = n);
	return (0);
}
