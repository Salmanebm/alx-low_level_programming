#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to the binary string to be converted.
 *
 * Return: The converted unsigned integer, or 0 if the binary string
 *         is NULL or contains invalid characters (other than '0' or '1').
 */

unsigned int binary_to_uint(const char *b)
{	unsigned int tmp = 0;
	int i = 1;


	if (b == NULL)
	{
		return (0);
	}
	if (b[0] == '1')
	{	tmp = 1;
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			tmp = tmp * 2 + (b[i] - '0');
		}
		else
		{	return (0);
		}
		i++;
	}
	return (tmp);
}
