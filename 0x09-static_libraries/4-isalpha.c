#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - prints in an interger c and returns an integer
 * @c: receives an integer value
 *
 * Return: returns zero if succesful
 */

int _isalpha(int c)
{
return (isupper(c) || islower(c));
}
