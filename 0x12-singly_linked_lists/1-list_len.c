#include <stdio.h>
#include "lists.h"

/**
* list_len - check the code
* @h: int
* Return: Always int.
*/
size_t list_len(const list_t *h)
{
	unsigned int res;
	list_t *node;

	res = 0;
	if (h != NULL)
	{
		res += 1;
		node = h->next;
		while (node != NULL)
		{
			res += 1;
			node = node->next;
		}
	}
	return (res);
}
