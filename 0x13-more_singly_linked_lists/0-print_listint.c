#include "lists.h"

/**
 * print_listint - these will actually prints all the elements of a list.
 * @h: variable head of a list.
 *
 * Return: returning the numbers of nodes.
 */
 
size_t print_listint(const listint_t *h)
{
	size_t ndes = 0;

	for (; h != NULL; h = h->next)
    {
     printf("%d\n", h->n);
      ndes++;
}
	return (ndes);
}