#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: list to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, lesser, f;
	int temp;

	if (!array || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		lesser = i;
		f = 0;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[lesser])
			{
				lesser = j;
				f = 1;
			}
		if (f != 0)
		{
			temp = array[i];
			array[i] = array[lesser];
			array[lesser] = temp;
			print_array(array, size);
		}
	}
}
