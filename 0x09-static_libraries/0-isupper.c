#include "main.h"

/**
 * _isupper - prints in an interger c and returns an integer
 * @c: receives an integer value
 *
 * Return: returns zero if succesful
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
return (c);
}
