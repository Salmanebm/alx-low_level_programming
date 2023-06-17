#include <stdio.h>
/**
 * main - Entry point of the program
 * Description: Prints the size of various types on the computer it is compiled
 *              and run on.
 * Return: Always 0 (Success)
 */
int main(void)
{	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	fprintf(stderr, "[Anything]");
	return (0);
}
