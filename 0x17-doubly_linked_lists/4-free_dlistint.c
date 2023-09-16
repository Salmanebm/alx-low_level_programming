#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - free element
 * @head: list to add ont it
 * 
 * Return:Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	free(head);
}
