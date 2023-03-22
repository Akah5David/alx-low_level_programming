#include  <stdio.h>
#include "main.h"

/**
 * _isalpha - returns different int value depending on the conditon
 * @c: variable that receives the integer value of the calling function
 *
 * Return: returns 1 if condition is true and rturns 0 if the condition
 * is false
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
