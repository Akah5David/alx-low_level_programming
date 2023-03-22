#include "main.h"

/**
 *print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
int ten;
char la;
for (ten = 0; ten <= 9; ten++)
{
la = 'a';

while (la <= 'z')
{
_putchar(la);
la++;
}
_putchar('\n');
}
}
