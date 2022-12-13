#include "main.h"
/**
 * _isalpha - check if c is an alphabet
 * @c: letter input
 *
 * Description: check if an input is alphabet
 * Return: 1 if c is a lowercase; otherwise 0
 */
int _isalpha(int c)
{
	int val;

	val = c;
	if ((val >= 97 && val <= 122) || (val >= 65 && val <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
