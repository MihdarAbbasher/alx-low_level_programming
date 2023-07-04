#include "lists.h"
/**
 * delete_nodeint_at_index - thsi function delete a node
 * @head: the head of list
 * @index: the index to put the delete node
 * Description: this function delete a node
 * section header: the header of this function is lists.h)*
 * Return: 1 in success -1 in failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp_node = *head;

	if (!index)
	{
		*head = tmp_node->next;
		free(tmp_node);
		return (1);
	}

	for (i = 0; tmp_node && i < index - 1; i++)
		tmp_node = tmp_node->next;

	if (tmp_node == NULL || tmp_node->next == NULL)
		return (-1);

	next = tmp_node->next->next;
	free(tmp_node->next);
	tmp_node->next = next;
	return (1);
}
