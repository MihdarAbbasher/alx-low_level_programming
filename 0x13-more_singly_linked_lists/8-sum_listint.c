#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - check the code
* @head: int node head
* Return: Always int.
*/
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	tmp = head;
	sum = 0;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

