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

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
