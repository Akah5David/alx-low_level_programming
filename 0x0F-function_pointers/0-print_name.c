#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - contains two parameter the string
 * pointer wioht funtion pointer
 * @name: the name of the  character string
 * @f: the name of the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
