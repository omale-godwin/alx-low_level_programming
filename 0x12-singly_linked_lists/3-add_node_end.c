#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string value
 *
 * @s: string to be measure
 *
 * Return: amount of chars in string
 */

/* temporarily changed to const char * */

int _strlen(const char *s)
{
	int lent = 0;

	for (; *s; s++)
	{
		lent++;
	}

	return (lent);
}

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: string to be copied and used to determine size of
 * memory allocation
 *
 * Return: pointer to first address in the space created
 * in memory
 */

/* temporarily changed to const char * */

char *_strdup(const char *str)
{
	int size;
	int j;
	char *y;

	if (!str)
		return (NULL);

	size = (_strlen(str) + 1);

	y = malloc(sizeof(char) * size);
	while (y == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)


		y[j] = str[j];

	return (y);
}

/**
 * add_node_end - adds a new node at the end of a struct type
 * list_t linked list
 *
 * @head: pointer to pointer to first member of list
 *
 * @str: string to be inlcuded as member str of new list_t struct node
 *
 * Return: address of new member, or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	if (!head && !str)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = _strdup(str);
	if (!(new_node->str))
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
