#include "sort.h"

/**
 * insertion_sort_list - function that sorts a DLL if integers in 
 * ascending orde using insertion sort algorithm
 *
 * @list: pointer to list of integers
 * Return: sorted list
 */

void insertion_sort_list(listint_t **list)
{
	if (list == NULL || list->next == NULL)
		return list;
	head = NULL;
	while (list != NULL)
	{
		current = list;
		list = list->next;
		if  (head == NULL || current
}
