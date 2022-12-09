#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabets in lower case in reverse
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
