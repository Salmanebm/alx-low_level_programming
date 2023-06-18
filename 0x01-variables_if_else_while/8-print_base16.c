#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers of base 16, followed by a new line.
 *              Uses the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char letter;
for (letter = '0'; n <= '9'; n++)
{
putchar(letter);
}
for (letter = 'a'; letter <= 'f'; n++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
