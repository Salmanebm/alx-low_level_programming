#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 * @head: node
 * @index:index to delete
 * Return: 1 in SUCCESS 0 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int pos;

	if (head == NULL)
	{
		return (0);
	}
	if (index == 0)
	{
		current->next->prev = NULL;
	}
	while (current != NULL)
	{
		if (pos == index)
		{
			current->prev = current->next;
			return (1);
		}
		current = current->next;
		pos++;
	}
	return (0);
}
