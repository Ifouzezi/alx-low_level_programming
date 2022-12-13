#include "main.h"
/**
 * print_digits - print each digit in a number
 * @tmp: integer value
 *
 * Returns: Always 0
 */
void print_digits(int tmp)
{
	int unit, tens, huns;

	if (tmp > 99)
	{
		unit = tmp % 10;
		tens = ((tmp - unit) % 100) / 10;
		huns = (tmp - tens * 10 - unit) / 100;
		_putchar('0' + huns);
		_putchar('0' + tens);
		_putchar('0' + unit);
	}
	else
	{
		if (tmp > 9)
		{
			unit = tmp % 10;
			tens = (tmp - unit) / 10;
			_putchar('0' + tens);
			_putchar('0' + unit);
		}
		else
		{
			_putchar('0' + tmp);
		}
	}
}

/**
 * print_times_table - print n times table
 * @i: integer between 0 and 15
 *
 * Description: prints n times table\
 * prints nothing if n < 0 or n > 15
 * Return:Always 0
 */
void print_times_table(int i)
{
	int m, n, tmp;

	for (m = 0; m <= i; m++)
	{
		if ((i < 0) || (i > 15))
			break;
		for (n = 0; n <= i; n++)
		{
			tmp = m * n;
			print_digits(tmp);
			if (n < i)
			{
				_putchar(44);
				if (m * (n + 1) < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
				else
				{
					if (m * (n + 1) < 100)
					{
						_putchar(32);
						_putchar(32);
					}
					else
					{
						_putchar(32);
					}
				}
			}
		}
		_putchar('\n');
	}
}
