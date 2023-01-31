#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index - check the code
* @head: int node head
* @index: int
* Return: Always listint_t.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	if (tmp == NULL)
		return (NULL);
	if (index == 0)
		return (tmp);
	for (i = 1; i <= index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	return (tmp);
}

