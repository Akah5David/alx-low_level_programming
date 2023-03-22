#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - prints the abslute value of i
 * @i: the integer that takes the integer value of calling function
 *
 * Return: returns 0 if condition is false
 */

int _abs(int i)
{
if ((i <= 0) || (i >= 0))
{
i = abs(i);
return (i);
}
else
{
return (0);
}
}
