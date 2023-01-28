#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_list - check the code
* @head: list ptr
* Return: Always list.
*/
void free_list(list_t *h)
{
	list_t *node, *tmp;

	if (h == NULL)
	{
		return;
	}
	else if (h->next == NULL)
	{
		h = NULL;
		return;
	}
	node = h;
	while (node->next != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	free(node);
}
