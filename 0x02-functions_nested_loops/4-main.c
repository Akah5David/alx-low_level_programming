#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - a funtion that reurns a integer
 *
 * Return: zero is returned if the conditions are met.
 */

int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');

return (0);
}
