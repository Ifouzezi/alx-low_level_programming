#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from integer n to 98
 * @n: starting integer
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d%s%s", n, ",", " ");
		if (n > 98)
			n -= 1;
		else
			n += 1;
	}
	printf("%d\n", 98);
}
