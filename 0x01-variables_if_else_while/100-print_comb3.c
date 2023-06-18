#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * prints all possible different combinations of two digits,
 * The two digits must be different,
 * It uses the putchar function
 *              and adheres to the given restrictions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
putchar('0' + digit1);
putchar('0' + digit2);

if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
