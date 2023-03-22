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
x = abs(n % 10);
printf("%d", x);
return (x);

}
