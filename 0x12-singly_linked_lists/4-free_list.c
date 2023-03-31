#include "lists.h"

/**
 * free_list - these is a frees memory allocated to a struct type
 * list_t linked list varaible
 *
 * @head: these actually point to first member of list
 */

void free_list(list_t *head)
{
	list_t *temps;

	if (!head)
		return;

	while (head != NULL)
	{

		temps = head;

		head = head->next;

		free(temps->str);
		free(temps);
	}
}
