#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - prints in an interger c and returns an integer
 * @s: receives an integer value
 *
 * Return: return 0
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
