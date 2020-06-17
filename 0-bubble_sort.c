#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - 1; j++)
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
}
