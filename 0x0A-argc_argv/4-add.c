#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
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
int sum = 0;
int i, j;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum +=  atoi(argv[i]);
}
printf("%d\n", sum);



return (0);
}
