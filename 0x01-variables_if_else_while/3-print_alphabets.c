#include <stdio.h>
/**
* main - Entry point
*
*  Prints the alphabet in lowercase, and upper followed by a new line.
*              Uses the putchar function.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
