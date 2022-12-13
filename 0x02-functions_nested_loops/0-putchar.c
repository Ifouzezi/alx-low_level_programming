#include <stdio.h>
/**
 * print_putchar - prints putchar to standard output
 *
 * Description: prints _putchar to standar output
 * Return: 0 if sucessful
 */
int print_putchar(void)
{
	char txt[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(txt[i]);
	}
	putchar(10);
	return (0);
}
/**
 * main - entry point
 *
 * Description: prints _putchar to standar output
 * Return: 0 if sucessful
 */
int main(void)
{
	return (print_putchar());
}
