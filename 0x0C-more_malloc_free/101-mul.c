#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * mul - prints out mult to the calling function
 * main - prints the value of called function
 * @num1: takes first digit to be multiplied
 * @num2: takes second digit to be multiplied
 * @argc: array size
 * @argv: pointer array
 *
 * Return: returns the value of mult to the calling function
 */

int mul(char *num1, char *num2);

int main(int argc, char *argv[]) {
if (argc != 3)
{
for (int i = 0; "Error\n"[i] != '\0'; i++)
{
_putchar("Error\n"[i]);
}
return 98;
}

for (int i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
for (int k = 0; "Error\n"[k] != '\0'; k++)
{
_putchar("Error\n"[k]);
}
return 98;
}
}
}

int result = mul(argv[1], argv[2]);
if (result == -1)
{
for (int i = 0; "Error\n"[i] != '\0'; i++)
{
_putchar("Error\n"[i]);
}
return 98;

    
char buffer[20];
int i = 0;
while (result > 0)
{
buffer[i++] = '0' + result % 10;
result /= 10;
}
if (i == 0)
{
_putchar('0');
}
for (int j = i - 1; j >= 0; j--)
{
_putchar(buffer[j]);
}
_putchar('\n');

return 0;
}

int mul(char *num1, char *num2)
{
int n1 = atoi(num1);
int n2 = atoi(num2);
if (n1 == 0 || n2 == 0)
{
return 0;
}
int result = n1 * n2;
if (result < 0)
{
return -1;
}
return result;
}
