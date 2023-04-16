#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - prints in an interger c and returns an integer
 * @dest: receives an integer value
 * @src: klfklfkj
 *
 * Return: returns zero if succesful
 */

char *_strcat(char *dest, char *src)
{
int dest_len = strlen(dest);
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';

return (dest);
}
