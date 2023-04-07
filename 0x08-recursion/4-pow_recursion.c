#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _pow_recursion - gkljklfjklfklnklng
 * @x: jfjkhjkjk
 * @y: gbhjghjghghjhjkf
 *
 * Return: khghjkhjkhjkhbjkjvhb
 */

int _pow_recursion(int x, int y)
{
int i;
if(y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
i = x * _pow_recursion(x, y - 1);
return (i);
}
}

