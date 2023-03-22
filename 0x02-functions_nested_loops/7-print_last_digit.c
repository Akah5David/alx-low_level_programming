#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: variable that will hold integer value of the calling function.
 *
 * Return: returns x to the calling function.
 */

int print_last_digit(int n)
{
int x;
x = n % 10;
if (x < 0)
{
x = -x;
}
printf("%d", x);
return (x);
}
