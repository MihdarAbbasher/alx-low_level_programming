#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_listint - check the code
* @head: list ptr
* Return: Always list.
*/
void free_listint(listint_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
