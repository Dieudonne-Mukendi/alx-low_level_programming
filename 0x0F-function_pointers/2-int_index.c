#include "function_pointers.h"
/**
 *  int_index - searches for an integer within an array
 *  @array: pointer to an array
 *  @size: size of the array
 *  @cmp: pointer to the function to use to compare values
 *  Return: the index of the first element for which the cmp
 *  function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int loc, flac = 0;

	if (!(array && cmp && size > 0))
		return (-1);
	for (loc = 0; array[loc] < size || flac != 0; loc++)
		flac = (cmp(array[loc])) ? loc : 0;
	return (loc);
}
