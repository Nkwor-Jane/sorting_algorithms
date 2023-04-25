#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in
 * ascending order using Selection sort
 *
 * Return: sorted array
 */

/*void swap(int *a, int *b)
{
	int temp = *a;
	int *a = *b;
	int *b = temp;
}*/
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
		//swap(&array[idx], &array[step]);
		temp = array[idx];
		array[idx] = array[step];
		array[step] = temp;
		print_array(array, size);
	}
}
/**
 * swap - function to swap integers
 * @a: integer a
 * @b: integer b
 * Return: nothing
 */
/*void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}*/
