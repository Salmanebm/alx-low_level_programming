#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a new line.
 *              Uses the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
printf("0");
for (n = 1 ; n <= 9 ; n++)
{
if (n % 10 != 0)
printf("%d", n);
} printf("\n");
return (0);
}
