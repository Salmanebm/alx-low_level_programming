#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *  prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 * 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
{
putchar('0' + digit);
}

for (digit = 0; digit < 6; digit++)
{
putchar('a' + digit);
}

putchar('\n');
return (0);
}
