#include <stdio.h>
#include "lists.h"

/**
* listint_len - check the code
* @h: int
* Return: Always int.
*/
size_t listint_len(const listint_t *h)
{
	unsigned int res;

	res = 0;
	while (h != NULL)
	{
		res += 1;
		h = h->next;
	}
	return (res);
}
