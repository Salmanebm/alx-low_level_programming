#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - duplicate to new memory space location
 * @b: unsigned int
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
