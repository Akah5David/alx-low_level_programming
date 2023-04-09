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
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
