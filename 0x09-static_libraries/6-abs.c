#include <stdlib.h>
#include "main.h"

/**
 * _abs - prints in an interger c and returns an integer
 * @n: receives an integer value
 *
 * Return: returns zero if succesful
 */

int _abs(int n)
{
if (n < 0)
return (-n);
else
return (n);
}