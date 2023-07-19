#include <stdio.h>
/**
 * print_name - Prints a given name using a specified function.
 * @name: The name to be printed.
 * @f: A function pointer to the function that will print the name.
 */

void print_name(char *name, void (*f)(char *))
{
    f(name);
}
