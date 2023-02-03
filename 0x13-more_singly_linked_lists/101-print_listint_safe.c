#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>


/**
* add_nodeptr - check the code
* @n: int
* @head: ptr for head
* Return: Always int.
*/
listptr_t *add_nodeptr(listptr_t **head, const listptr_t *n)
{
	listptr_t *node;

	node = (listptr_t *) malloc(sizeof(listptr_t));
	if (node == NULL)
		return (NULL);
	node->p = n;
	node->next = *head;
	*head = node;
	return (node);
}


/**
* is_exist - check the code
* @n: int
* @head: ptr for head
* Return: Always int.
*/
void *is_exist(listptr_t **head, const listptr_t *n)
{
	listptr_t *node;
	void *ptr;

	ptr = NULL;
	node = *head;
	while (node != NULL)
	{
		if (node->p == n)
		{
			ptr = node;
			return (ptr);
		}
		node = node->next;
	}
	return (ptr);
}


/**
* print_listint_safe - check the code
* @head: int node head
* Return: Always listint_t.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *a;
	listptr_t *listp;
	unsigned int c;
	const void *res, *ptr;

	listp = NULL;
	a = head;
	c = 0;
	if (a == NULL)
		exit(98);
	while (a != NULL)
	{
		ptr = a;
		res = is_exist(&listp, ptr);
		if (res)
		{
			printf("-> [%p] %d\n", ptr, a->n);
			break;
		}
		add_nodeptr(&listp, ptr);
		printf("[%p] %d\n", ptr, a->n);
		a = a->next;
		c += 1;
	}
	return (c);
}

