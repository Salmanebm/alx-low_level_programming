#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 *              It uses the putchar function and follows the Betty coding style.
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
