#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: a pointer to the array of integers
 */
int *array_range(int min, int max)
{
	int i;
	int array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
