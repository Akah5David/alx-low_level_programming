#include <stdio.h>
#include "main.h"

/**
 * _isdigit - prints in an interger c and returns an integer
 * @c: receives an integer value
 *
 * Return: returns zero if succesful
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
