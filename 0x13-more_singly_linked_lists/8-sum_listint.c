#include "lists.h"

/**
 * sum_listint - calculates the sum of sum_all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum_all = 0;
listint_t *tmpt = head;

while (tmpt)
{
sum_all += tmpt->n;
tmpt = tmpt->next;
}

return (sum_all);
}

