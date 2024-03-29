#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * Bubble sort algorithm.
 * @array: The array of integers to sort.
 * @size: Size or Length of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tempp;
	int swapped;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - j - 1; j++)
		{
			swapped = 0;
			if (array[j] > array[j + 1])
			{
				tempp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempp;
				print_array(array, size);
			}
		}

		if (swapped == 0)
			break;
	}
}
