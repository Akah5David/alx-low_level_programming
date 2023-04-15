#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _puts - prints in an interger c and returns an integer
 * @s: rec
 */


void _puts(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
}
