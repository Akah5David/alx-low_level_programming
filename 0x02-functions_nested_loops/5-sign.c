#include  <stdio.h>
#include "main.h"

/**
 * print_sign - returns different int value depending on the conditon
 * @n: variable that receives the integer value of the calling function
 *
 * Return: returns 1 if condition is true and rturns 0 if the condition
 * is false
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
