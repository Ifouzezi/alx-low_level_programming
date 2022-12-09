#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints four-digits combinations with replacement
 * Return: 0 if successful
 */
int main(void)
{
	int ch, pos2, pos3, pos4;

	ch = 48;
	for (ch = 48; ch <= 57; ch++)
	{
		for (pos2 = 48; pos2 <= 57; pos2++)
		{
			for (pos3 = 48; pos3 <= 57; pos3++)
			{
				for (pos4 = 48; pos4 <= 57; pos4++)
				{
					if (ch * 10 + pos2 < pos3 * 10 + pos4)
					{
					putchar(ch);
					putchar(pos2);
					putchar(32);
					putchar(pos3);
					putchar(pos4);
					if (!(((ch == 57) && (pos2 == 56)) && ((pos3 == 57) && (pos4 == 57))))
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
