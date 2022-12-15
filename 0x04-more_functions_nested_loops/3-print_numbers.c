#include "main.h"
/**
 * print_numbers - print numbers between 0 and 9
 *
 * Description: prints single digit numbers
 * Return: 0 if successful
 */
void print_numbers(void)
{
	char ch;

	ch = '0';
	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar(10);
}
