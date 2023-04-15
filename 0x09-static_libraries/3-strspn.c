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

unsigned int i, j, count = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}
if (accept[j] == '\0')
{
/* s[i] is not in accept, stop here */
break;
}
}
return (count);
}
