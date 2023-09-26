#include "sort.h"

/**
 * selection_sort- Sorts an areay of integers using selection sort
 * @array: The array to be sorted
 * @size: The number of elements int eh array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			/** Swap elements at i and min_idx */
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			/** pront array after each swap*/
			print_array(array, size);
		}
	}
}
