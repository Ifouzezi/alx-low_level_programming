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
		if ((i != 101) && (i != 113))
			putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
