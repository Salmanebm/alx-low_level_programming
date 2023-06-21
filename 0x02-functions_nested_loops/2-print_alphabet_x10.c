#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet 10 times.
 * Each letter is printed using the putchar function.
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
char l;
int i;
i = 0;
while (i < 10)
{
l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
i++;
}
}
