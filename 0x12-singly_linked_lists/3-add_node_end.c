#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/* betty style doc for function main goes there */
/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (1 == 1)
	{
		if (*(s + i) != '\0')
		{
			i += 1;
		}
		else
		{
			break;
		}
	}
	return (i);
}

/**
* add_node_end - check the code
* @str: str
* @head: list ptr
* Return: Always list.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
		node->len = _strlen(str);
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
