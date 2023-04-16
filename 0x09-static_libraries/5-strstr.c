#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strstr - prints in an interger c and returns an integer
 * @haystack: receives an integer value
 * @needle: klfklfkj
 *
 * Return: returns zero if succesful
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;

while (*n != 0 && *h == *n)
{
h++;
n++;
}

if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
