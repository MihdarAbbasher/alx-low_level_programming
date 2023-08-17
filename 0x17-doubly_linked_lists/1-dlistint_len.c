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
