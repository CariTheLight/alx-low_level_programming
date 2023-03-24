#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls a function to iterate through the array
 * @array: Name of array in which funtion acts on
 * @size: size of array passed to function
 * @action: function which acts on the array elements
 * Return: Nothing (void output)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
