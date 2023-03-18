#include "main.h"
#include <unistd>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and erro is set appropriately.
 */
int_putchar(char c)
{
return (write(1, &c, 1));
}