#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints alphabets in lower case
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	i = 65;
	while (i < 91)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
