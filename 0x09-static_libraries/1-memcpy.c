#include <stdio.h>
#include "main.h"

/**
 * _memcpy - prints in an interger c and returns an integer
 * @dest: receives an integer value
 * @src: klfklfkj
 * @n: hljkfddfj
 * Return: returns zero if succesful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}