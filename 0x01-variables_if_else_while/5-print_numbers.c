#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints single digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	ch = '0';
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
