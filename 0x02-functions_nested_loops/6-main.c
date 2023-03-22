#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - returns integer value at the end if a program
 *
 * Return: returns if run sucessfully
 */

int main(void)
{
int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
