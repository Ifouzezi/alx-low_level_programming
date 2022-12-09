#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints single digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int ch;

	ch = 48;
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
