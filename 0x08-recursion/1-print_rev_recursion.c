#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a reversef string using recursion
 * @s: variable receiving the struing value
 *
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
