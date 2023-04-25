#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Prinst an list of integers
 *
 * @list: The list to be printed
 */
void print_array(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		i++;
		list = list->next;
	}
	printf("\n");
}
