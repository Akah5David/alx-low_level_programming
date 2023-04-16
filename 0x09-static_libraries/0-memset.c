#include <stdio.h>
#include "main.h"

/**
 * _memset - prints in an interger c and returns an integer
 * @s: receives an integer value
 * @b: klfklfkj
 * @n: jkghjhjb
 * Return: returns zero if succesful
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
