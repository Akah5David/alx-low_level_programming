#include <stdio.h>
#include "main.h"

/**
 * _strcmp - prints in an interger c and returns an integer
 * @s1: receives an integer value
 * @s2: klfklfkj
 *
 * Return: returns zero if succesful
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

if (*s1 == *s2)
{
return (0);
}
else if (*s1 < *s2)
{
return (-1);
}
else
{
return (1);
}
}
