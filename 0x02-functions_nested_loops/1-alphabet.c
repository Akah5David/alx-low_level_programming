#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: nothing is returne since the return type is void
 */
void print_alphabet(void)
{
char letter;
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
