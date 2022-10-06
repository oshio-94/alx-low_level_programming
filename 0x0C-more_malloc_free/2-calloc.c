#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of memory spaces - nmemb
 * Return: returns pointer to allocated memory or NULL 
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		mem[i] = 0;

	return (mem);
}