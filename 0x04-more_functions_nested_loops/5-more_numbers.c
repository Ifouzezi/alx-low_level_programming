#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 *
 * Returns: Always 0
 */
void more_numbers(void)
{
	int i, unit, tens, tmp;

	for (i = 1; i <= 10; i++)
	{
		tmp = 0;
		while (tmp < 15)
		{
			unit = tmp % 10;
			tens = (tmp - unit) / 10;
			if (tens != 0)
				_putchar('0' + tens);
			_putchar('0' + unit);
			tmp++;
		}
		_putchar(10);
	}
}
