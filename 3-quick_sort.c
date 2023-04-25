#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using quick sort
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: sorted array
 */

void quick_sort(int *array, size_t size)
{
	lomuto_scheme(array, size, array, size);
}

/**
 * lomuto_scheme: implemet quick sort using lomuto scheme
 * 
 * @array: array to be sorted
 * @size: size of array
 * @
 * Return: Null
 */
void lomuto_scheme(int *array, size_t size, int *full, size _t full)
{
	int  temp;
}
