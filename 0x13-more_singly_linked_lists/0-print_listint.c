#include <stdio.h>
#include "lists.h"

/**
* print_listint - check the code
* @h: int
* Return: Always int.
*/
size_t print_listint(const listint_t *h)
{
	unsigned int res;

	res = 0;
	while (h != NULL)
	{
		res += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (res);
}
