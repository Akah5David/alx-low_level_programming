#include <stdio.h>
#include "main.h"

/**
 * _islower - prints in an interger c and returns an integer
 * @c: receives an integer value
 *
 * Return: returns zero if succesful
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return 1;
}
return 0;
}
