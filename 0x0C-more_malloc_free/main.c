#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - prints the value of called function
 * @argc: array size
 * @argv: pointer array
 *
 * Return: returns the value of mult to the calling function
 */

int main(int argc, char *argv[])
{
int i;
int j;
int k;
int result;
char buffer[20];
if (argc != 3)
{
for (i = 0; "Error\n"[i] != '\0'; i++)
{
_putchar("Error\n"[i]);
}
return (98);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
for (k = 0; "Error\n"[k] != '\0'; k++)
{
_putchar("Error\n"[k]);
}
return (98);
}
}
}
}

result = mul(argv[1], argv[2]);
if (result == -1)
{
for (i = 0; "Error\n"[i] != '\0'; i++)
{
_putchar("Error\n"[i]);
}
return (98);

i = 0;
while (result > 0)
{
buffer[i++] = '0' + result % 10;
result /= 10;
}
if (i == 0)
{
_putchar('0');
}
for (j = i - 1; j >= 0; j--)
{
_putchar(buffer[j]);
}
}
_putchar('\n');

return (0);
}
