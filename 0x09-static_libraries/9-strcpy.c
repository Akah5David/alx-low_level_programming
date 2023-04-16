#include <stdio.h>
#include "main.h"

/**
 * _strcpy - prints in an interger c and returns an integer
 * @dest: receives an integer value
 * @src: receives character string
 *
 * Return: returns zero if succesful
 */

char *_strcpy(char *dest, char *src)
{
char *new_dest = dest;
while(*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (new_dest);
}
