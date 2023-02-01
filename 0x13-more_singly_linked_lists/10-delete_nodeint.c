#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - check the code
* @head: int node head
* @index: int
* Return: Always listint_t.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *aftertmp;
	unsigned int i;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	aftertmp = tmp->next;
	tmp->next = aftertmp->next;
	free(aftertmp);
	return (1);
}

