#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using
 * the Selection sort algorithm.
 * @array: The array of integers to sort.
 * @size: The size or length of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int tempp;
	int min_index;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if ((size_t)min_index != i)
		{
			tempp = array[i];
		       	array[i] = array[min_index];
			array[min_index] = tempp;

			print_array(array, size);
		}
	}
}
