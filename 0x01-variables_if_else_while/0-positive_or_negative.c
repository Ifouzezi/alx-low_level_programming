#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * pos_or_neg - Prints sign of integer
 * @n: integer n
 *
 * Description: Prints positive, negative, or zero\
 * depending on the sign of the int
 * Return: int is positive if int is positive
 */

/* betty style doc for function main goes there */

void pos_or_neg(int n)
{
	int i;

	i = n;
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		if (i > 0)
		{
			printf("%d is positive\n", i);
		}
		else
		{
			printf("%d is negative\n", i);
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
	pos_or_neg(n = n);
	return (0);
}
