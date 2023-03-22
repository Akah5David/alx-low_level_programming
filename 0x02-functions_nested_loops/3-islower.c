#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 *  _islower - returns 0 or 1 if the condition is false or true
 *  respectively
 *  @c: takes int value of the calling function
 *
 *  Return: 1 or 0 depending on the condition
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
