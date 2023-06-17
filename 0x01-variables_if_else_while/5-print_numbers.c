#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *              Uses the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0 ; n <= 9 ; n++)
{ if (n % 10 != 0)
printf("%d\n",n);
} return (0);
}
