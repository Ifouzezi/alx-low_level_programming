#include "main.h"
/**
 * _isdigit - check if c is a digit
 * @c: integer input
 *
 * Description: check if an input is alphabet
 * Return: 1 if c is a digit; otherwise 0
 */
int _isdigit(int c)
{
	int val;

	val = c;
	if ((val >= 48 && val <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
