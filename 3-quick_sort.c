#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers
 *              in ascending order
 * @array: The array of numbers to sort
 * @size: size of the array
 *
 * Return: Void(nothing)
 */
void quick_sort(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}


/**
 * swap - swap 2 elements
 * @a: pointer to first element
 * @b: pointer to second element
 * Return: nothing
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto - selects a pivot and partitions the array around it
 * @array:  The array of numbers to sort
 * @low: the first number index
 * @high: the last number indes
 * @size: size of the array of numbers
 * Return: the pivot after partitioning
 */
int lomuto(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] != array[high])
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * _quick_sort - auxiliary function for the quick_sort function
 * @array: the array of numbers to sort
 * @low: the first number index
 * @high: the last number index
 * @size: size of the array of numbers
 */
void _quick_sort(int *array, int low, int high, int size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto(array, low, high, size);

		_quick_sort(array, low, pivot - 1, size);
		_quick_sort(array, pivot + 1, high, size);
	}
}
