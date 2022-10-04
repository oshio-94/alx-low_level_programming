#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: an input pointer of the string were going to copy
 * Return: a pointer to the new string or NULL
 */
char *_strdup(char *str)
{
	char *nwstrng, *start;
	int i = 0, strlen = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		strlen++;
		str++;
	}

	str = start;
	nwstrng = malloc(sizeof(char) * (strlen + 1));
	start = nwstrng;

	if (nwstrng != NULL)
	{
		for (; i < strlen; i++)
		{
			nwstrng[i] = *str;
			str++;
		}
		nwstrng[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
