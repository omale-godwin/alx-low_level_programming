#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a latest node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 unsigned int i;
 listint_t *latest;
 listint_t *tmpt = *head;
 latest = malloc(sizeof(listint_t));
 if (!latest || !head)
 return (NULL);
 latest->n = n;
 latest->next = NULL;
 if (idx == 0)
 {
 latest->next = *head;
 *head = latest;
 return (latest);
 }
 for (i = 0; tmpt && i < idx; i++)
 {
 if (i == idx - 1)
 {
 latest->next = tmpt->next;
 tmpt->next = latest;
 return (latest);
 }
 else
 tmpt = tmpt->next;
 }
 return (NULL);
}
