#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - check the code
* @head: int node head
* @n: int
* Return: Always int.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

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
			tmp = *head;
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = node;
		}
	}
	return (node);
}

