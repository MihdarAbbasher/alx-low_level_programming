#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* find_listint_loop - check the code
* @head: int node head
* Return: Always listint_t.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	while (head)
	{
		a = head->next;
		head->next = b;
		b = head;
		head = a;
	}
	head = b;
	return (head);
}

