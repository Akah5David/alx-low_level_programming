#include <stdio.h>
#include "main.h"

/**
 * *_memset - it fills the 
 * @s: string variable that points to n bytes of memory
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: return a  character in run succssefully
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;
int *ptr;
ptr = s;

for (i = 0; i < n; i++)
{
s[i] = b;
_putchar(s[i]);
}
_putchar("\n");

return (ptr);
}
