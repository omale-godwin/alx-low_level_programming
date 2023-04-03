#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: numberinteger
 * @next: these varaible is the points to the next node
 *
 * Description: singly linked list 0x13-more_singly_linked_lists
 */
 
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);


#endif