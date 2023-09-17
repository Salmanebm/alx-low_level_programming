#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at index
 * @h: node
 * @idx: index
 * @n: int to add
 * Return: new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int pos = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node = add_dnodeint(&current, n);
		return (new_node);
	}
	while (current != NULL && pos < idx - 1)
	{
		current = current->next;
		pos++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
