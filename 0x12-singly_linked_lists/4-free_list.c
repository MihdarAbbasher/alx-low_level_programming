#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_list - check the code
* @head: list ptr
* Return: Always list.
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}
