#include <stdio.h>
#include "lists.h"

/**
* print_listint - check the code
* @head: int
* Return: Always int.
*/
size_t print_listint(const listint_t *head)
{
	unsigned int res;
	const listint_t *h;

	h = head;
	res = 0;

	while (h != NULL)
	{
		res += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (res);
}
