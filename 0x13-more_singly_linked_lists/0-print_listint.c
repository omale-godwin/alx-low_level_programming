#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *curs = h;
size_t cnt = 0;
while(curs != NULL)
{
printf("%d\n", curs->n);
cnt +=1;
curs = curs->next;

}
return (cnt);
}
