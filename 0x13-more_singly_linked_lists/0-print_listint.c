#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 for (struct Node* curr = h; curr != NULL; curr = curr->next) {
    printf("%d\n", curr->n);
    num++;
}

 return (num);
}
