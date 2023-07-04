#include "lists.h"

/**
 * find_listint_loop - fnd a loop in a list
 * @head: points to beginning of list
 * Return: the address where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp_node, *tmp;

	if (!head)
		return (NULL);
	tmp_node = head;
	tmp = head;
	while (tmp->next && tmp->next->next)
	{
		tmp = tmp->next->next;
		tmp_node = tmp_node->next;
		if (tmp == tmp_node)
		{
			tmp_node = head;
			while (tmp_node != tmp)
			{
				tmp_node = tmp_node->next;
				tmp = tmp->next;
			}
			return (tmp);
		}
	}
	return (NULL);
}
