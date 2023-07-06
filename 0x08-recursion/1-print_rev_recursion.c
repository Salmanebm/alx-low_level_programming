#include "main.h"
/**
 * _print_rev_recursion - imprime en reversa
 * @s: string
 * return: 0
 */
void _print_rev_recursion(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
