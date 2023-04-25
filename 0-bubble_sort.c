#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: sorted array
 */

void bubble_sort(int *array, size_t size)
{
	for (int step = 0; step < size - 1; step++)
	{
		for (int i = 0; i < size - step - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int temp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
