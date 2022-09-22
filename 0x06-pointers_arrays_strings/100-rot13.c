#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */
char *rot13(char *s)
{
	int count, i;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	count = 0;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == x[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}