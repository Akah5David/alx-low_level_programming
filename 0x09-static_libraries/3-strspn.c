#include <stdio.h>
#include "main.h"

/**
 * _strspn - prints in an interger c and returns an integer
 * @s: receives an integer value
 * @accept: klfklfkj
 *
 * Return: returns zero if succesful
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int match = 0;
while (*s != '\0')
{
match = 0;
for (char *a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
match = 1;
break;
}
}
if (match == 0)
{
return len;
}
len++;
s++;
}
return len;
}
