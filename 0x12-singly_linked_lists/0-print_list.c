#include <stdio.h>
#include "lists.h"


/**
 * print_list - these function that prints all the elements of a list_t list
 * @h: Constant varaible to pointer of structure list_t
 * Return: Number of nodes available
 */


size_t print_list(const list_t *h)
{
	unsigned int p = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		p++;
	}

	return (p);
}
