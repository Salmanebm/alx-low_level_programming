#include <unistd.h>
#include <string.h>
#include <sys/syscall.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the message "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *              to the standard error.
 *
 * Return: Always 1
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    size_t len = strlen(message);

    syscall(SYS_write, STDERR_FILENO, message, len);

    return 1;
}
