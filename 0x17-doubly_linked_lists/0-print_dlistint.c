#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @h: head of double liked list
 * Return: size
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	unsigned int res;

	curr = h;
	res = 0;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		res += 1;
	}
	return (res);
}
