#include "main.h"
/**
 * _islower - check if an alphabet is lower case
 * @c: letter input
 *
 * Description: check for the case of an alphabet
 * Return: 1 if c is a lowercase; otherwise 0
 */
int _islower(int c)
{
	int val;

	val = c;
	if (val >= 97 && val <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
