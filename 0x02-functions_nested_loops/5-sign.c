#include "main.h"
/**
 * print_sign - print the sign of a signed integer
 * @c: digit input
 *
 * Description: check and print the sign of an integer
 * Return: + if postive, 0 if 0, and - if negative
 */
int print_sign(int c)
{
	int val;

	val = c;
	if (val == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		if (val > 0)
		{
			_putchar(43);
			return (1);
		}
		else
		{
			_putchar(45);
			return (-1);
		}
	}
}
