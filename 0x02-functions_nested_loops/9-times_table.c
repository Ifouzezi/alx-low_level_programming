#include "main.h"
/**
 * times_table - print the 9 times table
 *
 * Return:Always 0
 */
void times_table(void)
{
	int m, n, tmp, tens, unit;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			tmp = m * n;
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
			if (n < 9)
			{
				_putchar(44);
				if (m * (n + 1) > 9)
				{
					_putchar(32);
				}
				else
				{
					_putchar(32);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
