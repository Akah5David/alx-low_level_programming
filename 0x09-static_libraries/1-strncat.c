#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - prints in an interger c and returns an integer
 * @dest: receives an integer value
 * @src: klfklfkj
 * @n: hjffh
 *
 * Return: returns zero if succesful
 */

char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest);
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
