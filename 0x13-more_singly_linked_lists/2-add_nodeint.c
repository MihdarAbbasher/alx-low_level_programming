#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - check the code
* @n: int
* @head: ptr for head
* Return: Always int.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
