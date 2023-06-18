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

for (n = 0; n <= 15; n++)
{
putchar(n + '0');
}

putchar('\n');

return (0);
}
