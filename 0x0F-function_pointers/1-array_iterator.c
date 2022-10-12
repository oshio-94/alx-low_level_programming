#include "function_pointers.h"
/**
 * array_iterator - executes a func given as a parameter
 * on each alement of an array
 * @array: array to execute a function
 * @size: size of an array
 * @action: pointers to the function to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
