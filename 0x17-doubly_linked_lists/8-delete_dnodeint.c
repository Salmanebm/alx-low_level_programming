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
	dlistint_t *temp = *head;
	dlistint_t *node_to_delete;
	unsigned int pos = 0;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (current != NULL && pos < index - 1)
	{
		current = current->next;
		pos++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	node_to_delete = current->next;
	current->next = node_to_delete->next;
	if (node_to_delete->next != NULL)
	{
		node_to_delete->next->prev = current;
	}
	free(node_to_delete);
	return (1);
}
