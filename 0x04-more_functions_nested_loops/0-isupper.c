#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: input character
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
