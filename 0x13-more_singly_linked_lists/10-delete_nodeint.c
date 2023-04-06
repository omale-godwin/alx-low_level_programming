#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index node
 * @head: pointer to the first element in the list node
 * @index: index of the node to be delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
 listint_t *tmpt = *head;
 listint_t *latest = NULL;
 unsigned int i = 0;
 if (*head == NULL)
 return (-1);
 if (index == 0)
 {
 *head = (*head)->next;
 free(tmpt);
 return (1);
 }
 while (i < index - 1)
 {
 if (!tmpt || !(tmpt->next))
 return (-1);
 tmpt = tmpt->next;
 i++;
 }
 latest = tmpt->next;
 tmpt->next = latest->next;
 free(latest);
 return (1);
}
