#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints single digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int ch, tmp;

	ch = 48;
	for (ch = 48; ch <= 57; ch++)
	{
		tmp = ch + 1;
		for (tmp = tmp; tmp <= 57; tmp++)
		{
			putchar(ch);
			putchar(tmp);
			if (!((ch == 56) && (tmp == 57)))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
