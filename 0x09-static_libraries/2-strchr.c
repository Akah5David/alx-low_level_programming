#include <stdio.h>
#include "main.h"

/**
 * _strchr - prints in an interger c and returns an integer
 * @s: receives an integer value
 * @c: klfklfkj
 *
 * Return: returns zero if succesful
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}