#include "lists.h"


/**
 * dlistint_len - get len
 * @h: head ptr
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new;
	size_t n;

	new = h;
	n = 0;
	while (new)
	{
		n += 1;
		new = new->next;
	}
	return (n);
}

/**
 * int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
 * @head: head
 * @index: index
 * Return: 1 if succeed, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, len;
	dlistint_t *tmp;

	len = dlistint_len(*head);
	if (index >= len)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return(1);
	}
	if (index == len - 1)
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp = NULL;
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
	}
	(tmp->prev)->next = tmp->next;
	(tmp->next)->prev = tmp->prev;
	free(tmp);
	return (1);
}
