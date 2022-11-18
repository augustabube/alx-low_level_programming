#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on an array
 * @array: input integer
 * @size: size of an array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
