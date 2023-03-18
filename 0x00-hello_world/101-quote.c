#include <stdio.h>

/**
 * main - prints a statement
 *
 * Return: return one (success)
 */

int main(void)
{
char my_str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fputs(my_str, stdout);
putchar('\n');
return (1);
}
