#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - check the code
* @head: list ptr
* Return: Always list.
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp, *h;

	h = *head;
	while (h)
	{
		tmp = h->next;
		free(h);
		h = tmp;
	}
}
