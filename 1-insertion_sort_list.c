#include "sort.h"

/**
 * insertion_sort_list - insertion sort algorithm
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *currnt, *prev;

	if (!list || *list == NULL)
		return;

	currnt = (*list);
	temp = currnt;

	while (currnt != NULL)
	{
		prev = currnt->prev;
		while (prev != NULL && prev->n > currnt->n)
		{
			if (prev->prev != NULL)
				prev->prev->next = currnt;

			if (currnt->next != NULL)
				currnt->next->prev = prev;

			currnt->prev = prev->prev;
			prev->next = currnt->next;
			currnt->next = prev;
			prev->prev = currnt;

			prev = prev->prev;
			currnt = prev->next;
			print_list(*list);
		}
		currnt = temp->next;
		temp = currnt;
	}
}
