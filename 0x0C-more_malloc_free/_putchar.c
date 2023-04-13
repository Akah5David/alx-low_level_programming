#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character variable
 * @c: variable hosting a character
 *
 * Return: returns an integer value
 */

int _putchar(char _c)
{
return (write(1, &c, 1));
}
