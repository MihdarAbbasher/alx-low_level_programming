#include "lists.h"
/**
 * free_listint2 - free a list
(* a blank line
*@head: the head of list
* Description: this function free a list.)?
(* section header: the header of this function is lists.h)*
* Return: void, no return
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp_node, *actual;

	if (head == NULL)
		return;

	actual = *head;
	while (actual != NULL)
	{
		tmp_node = actual;
		actual = tmp_node->next;
		free(tmp_node);
	}
	*head = '\0';
	head = '\0';
}
