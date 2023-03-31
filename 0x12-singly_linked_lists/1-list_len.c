#include "lists.h"



/**
 * list_len - counts the total elements of a struct type list_t linked list
 *
 * @h: these is a pointer to the first member of a singly linked list of structs
 * of type list_t
 *
 * 
 * Return: amount of nodes in the list
 */



size_t list_len(const list_t *h)
{
	unsigned int nodes = 1;
	struct Node *h_next = h->next;

	if (h)
	{
		if (h->next)
		

			nodes += list_len(h_next);

		return (nodes);
	}
	else
		return (0);
}

