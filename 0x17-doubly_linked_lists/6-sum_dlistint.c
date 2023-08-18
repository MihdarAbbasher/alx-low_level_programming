#include "lists.h"

/**
 * sum_dlistint - sum.
 * @head: head of dlinked list
 * Return: sum of data.
 */

int sum_dlistint(dlistint_t *head)
{
	int res;
	dlistint_t *node;

	node = head;
	res = 0;
	while (node)
	{
		res += node->n;
		node = node->next;
	}
	return (res);
}
