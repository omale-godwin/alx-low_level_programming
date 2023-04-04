#include "lists.h"

/**
 * add_nodeint - adds a latest node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that latest node
 *
 * Return: pointer to the latest node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest;

	latest = malloc(sizeof(listint_t));
	if (!latest)
		return (NULL);

	latest->n = n;
	latest->next = *head;
	*head = latest;

	return (latest);
}