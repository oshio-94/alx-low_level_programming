#include "main.h"
/**
 * _strspn - gets lngth of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: the number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, acc;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		acc = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				acc = 0;
				break;
			}
		}
		if (acc == 1)
			break;
	}
	return (i);
}
