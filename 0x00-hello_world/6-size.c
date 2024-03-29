#include <stdio.h>

/**
 * main - gives the size of various types
 *
 * Declaration: the sizes of char, int, long int, long long int
 * Return: return 0 always (success)
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long));
printf("Size of a long long int: %lu byte(s)\n",
		*(unsigned long)sizeof(long long));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));

return (0);

}
