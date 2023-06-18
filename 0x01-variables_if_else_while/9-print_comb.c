#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *  prints all possible combinations of single-digit
 *  numbers, separated by ", " and in ascending order.
 *  putchar function and adheres to the given restrictions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar('0' + digit);

if (digit != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
