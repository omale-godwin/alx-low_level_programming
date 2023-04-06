#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
<<<<<<< HEAD
 listint_t *tmpt;
 while (head)
 {
 tmpt = head->next;
 free(head);
 head = tmpt;
 }
}
=======
 listint_t *vals;
 while (head)
 {
 vals = head->next;
 free(vals);
 head = vals;
 }
}
 

>>>>>>> 41057c7a8706e3ba7d38b7d799db813500bbeaf3
