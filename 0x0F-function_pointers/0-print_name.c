#include <stdio.h>
/**
 * print_name - Prints a given name using a specified function.
 * @name: The name to be printed.
 * @f: A function pointer to the function that will print the name.
 *
 * Description: This function takes a name and a function pointer as arguments.
 * It then calls the function pointed to by the function pointer, passing the
 * name as an argument to that function for printing.
 */

void print_name(char *name, void (*f)(char *))
{
    f(name);
}
