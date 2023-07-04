#include "lists.h"
/**
 * sum_listint - thsi function adds the values stores in the list
 * @head: the head of list
 * Description: this function adds the values)?
 * section header: the header of this function is lists.h)*
 * Return: return the final result of the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp_node;
	int result;

	result = 0;

	if (head == NULL)
		return (0);
	tmp_node = head;
	while (tmp_node)
	{
		result = result + tmp_node->n;
		tmp_node = tmp_node->next;
	}
	return (result);
}
