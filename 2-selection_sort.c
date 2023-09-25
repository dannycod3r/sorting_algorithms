#include "sort.h"

/**
 * selection_sort - sort array in ascending order using selection sort
 * @array: pointer to the array to be sorted
 * @size: size of array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_pos, temp;

	/*loop through the entire array*/
	for (i = 0; i < size - 1; i++)
	{
		/*assume first element is smallest*/
		min_pos = i;

		/*loop through the loop starting from second element*/
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_pos])
			{
				min_pos = j;
			}
		}

		/*swap the smallest element*/
		if (min_pos != i)
		{
			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;

			print_array(array, size);
		}
	}
}
