#include "main.h"
/**
 * print_most_numbers - print numbers between 0 and 9, except 2 & 4
 *
 * Description: prints single digit numbers
 * Return: 0 if successful
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (!(ch == 50 || ch == 52))
			_putchar(ch);
	}
	_putchar(10);
}
