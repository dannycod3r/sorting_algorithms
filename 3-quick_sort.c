#include "sort.h"

/**
 * quick_sort - sort array of integers in ascending order using quick sort
 * @array: pointer to the array to be sorted
 * @size: number of elements of array
 *
 * Return: return nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t low = 0, high = size - 1, pivot_pos;

	if (low < high)
	{
		pivot_pos = lomuto(array, low, high);
		quick_sort(array, low, pivot_pos - 1);
		quick_sort(array, pivot_pos + 1, high)
	}
}


size_t lomuto(int *array, size_t low, size_t high)
{
	size_t pivot = array[high];
	size_t i = low - 1, j, tmp, temp;

	for (j = low; j < high; j++) {
		if (array[j] <= pivot) {
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	return i + 1;
}
