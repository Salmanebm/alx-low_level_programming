#include "main.h"
/**
* main - Entry point of the program
*
* prints alphabet in lower case with _putchar
* Return: 0 (Success)
*/
void print_alphabet(void)
{ char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}

