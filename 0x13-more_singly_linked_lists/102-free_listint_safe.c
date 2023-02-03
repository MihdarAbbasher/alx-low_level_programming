#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_listint - check the code
* @h: list ptr
* Return: Always list.
*/
size_t free_listint_safe(listint_t **h)
{
	unsigned int c;
	listint_t *b, *a, **head;

	head = h;
	b = NULL;
	while (*head)
	{
		c++;
		a = (*head)->next;
		(*head)->next = b;
		*head = a;
	}
	*head = b;
	return (c);
}
