#include <stdio.h>
#include "main.h"

/**
 * main - returns an integer of value at the end of the program
 *
 * Return: returns the value of the called funtion base on the conditions
 * set within the called funtion.
 */

int main(void)
{
int r;

r = print_sign(98);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0xff);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(-1);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
return (0);
}
