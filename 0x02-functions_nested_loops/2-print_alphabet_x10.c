#include "main.h"
/**
 * print_alphabet_x10 - print all lowercase alphabets 10 times
 *
 * Description: prints alphabets in lower case
 * Return: 0 if successful
 */
void print_alphabet_x10(void)
{
	int i, cnt = 10;

	while (cnt > 0)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar(10);
		cnt--;
	}
}
