#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return:returns 1 if successful.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
