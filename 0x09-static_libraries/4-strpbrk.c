#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - prints in an interger c and returns an integer
 * @s: receives an integer value
 * @accept: klfklfkj
 *
 * Return: returns zero if succesful
 */

char *_strpbrk(char *s, char *accept)
{
s = "Hello, World!";
accept = "aeiou";
char *result = _strpbrk(s, accept);
if (result != NULL)
{
printf("The first vowel in '%s' is at position %ld.\n", s, result - s);
}
else
{
printf("No vowel found in '%s'.\n", s);
}
return (result);
}
