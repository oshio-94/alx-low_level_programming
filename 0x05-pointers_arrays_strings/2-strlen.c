#include "main.h"
/**
 * _strlen - returns the length od a string
 * @s: input string
 * Return: length odf a string
 */
int _strlen(char *s)
{
	int count = 0
	
	while (*(s + count) != '\0')
		count++;
	return (count);
}
