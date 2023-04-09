#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument counter and determinant of the size of
 * argz array.
 * @argv: vector array or one dimensional array used to
 * print out the string of arguments(using index values
 * greater than) and program name(using index value zero)
 *
 * Return: returns 0 if the process is true.
 */

int main(int argc, char *argv[])
{
int mul = 1;
int i;
if (argc == 3)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
}
if (argc != 3)
{
printf("Error\n");
return (1);
}
return (0);
}
