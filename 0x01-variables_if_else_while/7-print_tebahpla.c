#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercas in reve, followed by a new line.
 *              Uses the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;

for (letter = 'z'; letter <= 'a'; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);
}
