#include "lists.h"

/**
 * add_dnodeint_end - add a node in the tail of a dlinked list
 * @head: the list
 * @n: int value of node
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	curr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (curr == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = new;
	new->prev = curr;
	return (new);
}
