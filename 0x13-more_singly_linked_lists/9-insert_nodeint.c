#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* insert_nodeint_at_index - check the code
* @head: int node head
* @index: int
* @n: int
* Return: Always listint_t.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *node, *tmp;
	unsigned int i;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = NULL;
		if (*head == NULL)
		{
			*head = node;
		}
		else
		{
			if (index == 0)
			{
				node->next = *head;
				*head = node;
				return (node);
			}
			tmp = *head;
			for (i = 1; i < index; i++)
			{
				if (tmp == NULL)
					return (NULL);
				tmp = tmp->next;
			}
			node->next = tmp->next;
			tmp->next = node;
		}
	}
	return (node);
}

