#include <stdio.h>
#include "main.h"

/**
 * factorial - jkfhjkhbgjhtjghnjeh
 * @n: kfhugjhgjhhjkghj
 *
 * Return: ghjgjhghjhghj
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}