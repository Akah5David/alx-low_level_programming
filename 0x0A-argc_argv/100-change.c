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
int num_coin_types;
int coin_values[5] = {25, 10, 5, 2, 1};
int num_coins;
int cents;
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

/*parsing statement as an integer*/

cents = atoi(argv[1]);

/*checking for negavtive input*/

if (cents < 0)
{
printf("0\n");
return (0);
}

/*calculating the minimum number of coins needed*/

num_coins = 0;
num_coin_types = 5;


for (i = 0; i < num_coin_types; i++)
{
num_coins += cents / coin_values[i];
cents %= coin_values[i];
}

printf("%d\n", num_coins);

return (0);
}
