#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* reverse_listint - check the code
* @head: int node head
* Return: Always listint_t.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *b, *a;

	b = NULL;
	if (!*head || !head)
		return (*head);
	while (*head)
	{
		a = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = a;
	}
	*head = b;
	return (*head);
}

