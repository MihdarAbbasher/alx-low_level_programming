#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_list_end - check the code
* @head: list ptr
* Return: Always list.
*/
void free_list_end(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	else
	{
		tmp = head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp = NULL;
	}
}


/**
* free_list - check the code
* @head: list ptr
* Return: Always list.
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free_list_end(head);
	}
}
