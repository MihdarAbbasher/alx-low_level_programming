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
	listint_t *cursor;
	listint_t **temp;

	temp = head;
	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			*head = (*head)->next;
			free(cursor);
		}
		*temp = NULL;
	}
}		
