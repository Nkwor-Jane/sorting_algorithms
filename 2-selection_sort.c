#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using Selection sort
 * @array: array to be sorted
 * @size: size of array
 * Return: sorted array
 */

void selection_sort(int *array, size_t size)
{
	int  temp;

	for (int step = 0; step < size - 1; step++)
	{
		int idx = step;

		for (int i = step + 1; i < size; i++)
		{
			if (array[i] < array[idx])
				idx = i;
		}
		temp = array[idx];
		array[idx] = array[step];
		array[step] = temp;
		print_array(array, size);
	}
}
