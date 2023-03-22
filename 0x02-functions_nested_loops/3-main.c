#include <stdio.h>
#include "main.h"

/**
 * main - calls _islower() and prints its value
 *
 * Return: returns 0 at the end of the program
 */

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');

r = _islower('o');
_putchar(r + '0');

r = _islower(108);
_putchar(r + '0');

_putchar('\n');

return (0);
}
