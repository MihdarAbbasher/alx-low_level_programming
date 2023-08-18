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
 * insert_dnodeint_at_index - insert at idx
 * @h: head
 * @idx: index
 * @n: val
 * Return: adress of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int len, i;

	if (idx == 0)
	{
		tmp = add_dnodeint(h, n);
		return (tmp);
	}
	len = dlistint_len(*h);
	if (len == idx)
	{
		tmp = add_dnodeint_end(h, n);
		return (tmp);
	}
	if (idx > len)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	tmp = *h;
	for (i = 1; i < idx; i++)
	{
		tmp = tmp->next;
	}
	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next = new_node;
	tmp = new_node->next;
	tmp->prev = new_node;
	return (new_node);
}
