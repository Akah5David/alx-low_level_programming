#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * _putchar - returns intergevalue
 * @c: accepts character as the argument
 *
 * Return: return 0 if successful
 */

int _putchar(char c)
{
return (write(STDOUT_FILENO, &c, 1));
}
