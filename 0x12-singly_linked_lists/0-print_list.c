#include <stdio.h>
#include "lists.h"

/**
* print_list - check the code
* @h: int
* Return: Always int.
*/
size_t print_list(const list_t *h)
{
	unsigned int res;
	list_t *node;

	res = 0;
	if (h != NULL)
	{
		res += 1;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node = h->next;
		while (node != NULL)
		{
			res += 1;
			if (node->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%u] %s\n", node->len, node->str);
			}
			node = node->next;

		}
	}
	return (res);
}
