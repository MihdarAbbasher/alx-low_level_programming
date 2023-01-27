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
* add_node - check the code
* @str: str
* @head: list ptr
* Return: Always int.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
		node->len = _strlen(str);
		node->next = *head;
		*head = node;
	}
	return (node);
}
