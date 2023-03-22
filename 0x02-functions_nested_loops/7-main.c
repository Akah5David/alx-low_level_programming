#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - calls functtion and prints runs its program
 *
 * Return: return 0 at the end of the program
 */

int main(void)
{

int r;

print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
