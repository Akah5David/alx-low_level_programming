#include <stdio.h>
#include "main.h"

/**
 * _strncpy - prints in an interger c and returns an integer
 * @dest: receives an integer value
 * @src: klfklfkj
 * @n: ljfkl
 *
 * Return: returns zero if succesful
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (i = 0; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
