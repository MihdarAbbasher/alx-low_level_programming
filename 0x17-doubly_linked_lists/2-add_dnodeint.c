#include "lists.h"

/**
 * add_dnodeint - add node at start
 * @n: int val
 * @head: head of dlinked list
 * Return: new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->next = *head;
	node->prev = NULL;
	node->n = n;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
