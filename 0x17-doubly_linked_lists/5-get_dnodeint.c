#include "lists.h"
/**
 * get_dnodeint_at_index - get the node
 * @head: the node
 * @index: indes to get
 *
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int  pos = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		if (pos == index)
		{
			return (current);
		}
		current = current->next;
		pos++;
	}
	return (NULL);
}
