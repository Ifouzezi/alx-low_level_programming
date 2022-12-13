#include "main.h"
/**
 * jack_bauer - prints out all time in 24-hour clock
 *
 * Return:Always 0
 */
void jack_bauer(void)
{
	char ht, hu, hu_max, mt, mu;

	for (ht = '0'; ht <= '2'; ht++)
	{
		/*max cap hu at 4 if ht is 2*/
		if (ht < '2')
			hu_max = '9';
		else
			hu_max = '3';
		for (hu = '0'; hu <= hu_max; hu++)
		{
			for (mt = '0'; mt <= '5'; mt++)
			{
				for (mu = '0'; mu <= '9'; mu++)
				{
					_putchar(ht);
					_putchar(hu);
					_putchar(':');
					_putchar(mt);
					_putchar(mu);
					_putchar('\n');
				}
			}
		}
	}
}
