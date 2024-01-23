#include "sort.h"

/**
 * lomuto_partition - Lomuto partition scheme
 * @array: The array to be sorted
 * @low: The starting index
 * @high: The ending index
 * @size: The size of the array
 *
 * Return: The index of the pivot element
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;
	int tempp;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				tempp = array[i];
				array[i] = array[j];
				array[j] = tempp;

				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		tempp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tempp;

		print_array(array, size);
	}

	return (i + 1);
}

/**
 * quickSort - Implementation of the Quick Sort algorithm
 * @array: The array to be sorted
 * @low: The starting index
 * @high: The ending index
 * @size: The size of the array
 */
void quickSort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high, size);

		quickSort(array, low, pivot - 1, size);
		quickSort(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Quick Sort algorithm using Lomuto partition scheme
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quickSort(array, 0, size - 1, size);
}
