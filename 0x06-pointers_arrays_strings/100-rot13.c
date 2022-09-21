#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */
char *rot13(char *s)
{
	int a, b;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char z[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (x[b] == *(s + a))
			{
				*(s + a) = z[j];
				break;
			}
		}
	}
	return (s);
}
