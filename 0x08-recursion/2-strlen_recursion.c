#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - kjbjkfjkhfjkhjkfhvjf
 * @s: kjmfkjngknk
 *
 * Return: return 1
 */

int _strlen_recursion(char *s)
{
int n;
if (*s == '\0')
{

return 0;
}
/*_putchar(strlen(s));*/
n = 1 + _strlen_recursion(s + 1);
return (n);
}
