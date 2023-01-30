#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - check the code
* @head: ptr for head
* Return: Always int.
*/
int pop_listint(listint_t **head)
{
	int res;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}
	node = *head;
	res = node->n;
	*head = node->next;
	free(node);
	return (res);
}
