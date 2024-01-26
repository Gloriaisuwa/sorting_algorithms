#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order using Shell sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gaap = 1;
	size_t i, j;
	int tempp;

	if (array == NULL || size < 2)
		return;

	while (gaap < size / 3)
		gaap = gaap * 3 + 1;

	while (gaap > 0)
	{
		for (i = gaap; i < size; i++)
		{
			tempp = array[i];

			for (j = i; j >= gaap && array[j - gaap] > tempp; j -= gaap)
			{
				array[j] = array[j - gaap];
			}
			array[j] = tempp;
		}

		print_array(array, size);
		gaap = (gaap - 1) / 3;
	}
}
