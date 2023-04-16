#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * _atoi - prints in an interger c and returns an integer
 * @s: receives an integer value
 *
 * Return: returns zero if succesful
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

// Handling leading whitespace
while (isspace(s[i]))
{
i++;
}

// Handling sign
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
// Converting digits to integer
while (isdigit(s[i]))
{
result = result * 10 + (s[i] - '0');
i++;
}

return sign * result;
}
