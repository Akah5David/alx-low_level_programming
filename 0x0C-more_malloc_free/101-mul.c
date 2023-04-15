#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define MSG_FOR_ERROR "Error"

/**
 * is_digit - functio checks if a string contains a non-digit charracter
 * @c: string variable to house the string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *c)
{
int i; 
for (i = 0; c[i] < '0' || c[i] > '9'; i++)
{
return (0);
}
return (1);
}

/**
 * _strlen - function returns the length of a string if
 * the condition is satisfied
 * @s: string variable that houses the string to evaluate
 *
 * Return: the length of the string is returned at the end
 * of the program if all conditions are satisfied
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * errors - function handles errors for the main function
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - function multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 if successful and 1 if not successful
 */
int main(int argc, char *argv[])
{
char *s1;
char *s2;
int len1;
int len2;
int len;
int i;
int transport;
int digt1;
int digt2;
int *result;
int b;
b = 0;

s1 = argv[1];
s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
{
errors();
}
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digt1 = s1[len1] - '0';
transport = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digt2 = s2[len2] - '0';
transport+= result[len1 + len2 + 1] + (digt1 * digt2);
result[len1 + len2 + 1] = transport % 10;
transport /= 10;
}
if (transport > 0)
result[len1 + len2 + 1] += transport;
}
for (i = 0; i < len - 1; i++)
{
if (result[i])
b = 1;
if (b)
_putchar(result[i] + '0');
}
if (!b)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
