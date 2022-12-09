#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all single digit three-digits combinations
 * Return: 0 if successful
 */
int main(void)
{
	int ch, pos2, pos3;

	ch = 48;
	for (ch = 48; ch <= 57; ch++)
	{
		pos2  = ch + 1;
		for (pos2 = pos2; pos2 <= 57; pos2++)
		{
			pos3 = pos2 + 1;
			for (pos3 = pos3; pos3 <= 57; pos3++)
			{
				putchar(ch);
				putchar(pos2);
				putchar(pos3);
				if (!((ch == 55) && (pos2 == 56) && (pos3 == 57)))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
