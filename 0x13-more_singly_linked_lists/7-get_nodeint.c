#include "lists.h"
/**
 * get_nodeint_at_index - get the index of a node.
 * a blank line
 * @head: the head of list
 * @index: the index to find
 * Description: this function delete the head note)?
 * section header: the header of this function is lists.h)*
 * Return: void, no return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node;
	unsigned int i;


	tmp_node = head;

	for (i = 0; tmp_node; i++)
	{
		if (i == index)
			return (tmp_node);
		tmp_node = tmp_node->next;
	}
	return (NULL);
}
