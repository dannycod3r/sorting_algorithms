#include "sort.h"

/**
 * bubble_sort - Sorts the array in ascending order
 * @array: the array of integers to be sorted
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t j, l = 0;

	if (array == NULL || size < 2)
		return;

	for (l = 0; l < size - 1; l++)
	{
		for (j = 0; j < size - l - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_int(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}


/**
 * swap_int - function to swap the numbers
 * @first_int: the first_number
 * @second_int: the second number
 */

void swap_int(int *first_int, int *second_int)
{
	int tmp_int;

	tmp_int = *first_int;
	*first_int = *second_int;
	*second_int = tmp_int;
}
