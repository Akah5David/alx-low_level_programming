#include <ctype.h>
#include <stdio.h>

/**
 * main - prints letters of the alphabet in lower case.
 *
 * Description: main uses the strlwr function from <string.h>
 * library to carry out the conversion.
 * Return: the main function returns 0 at the end of the program
 */

int main(void)
{
char letter = 'A';

while (letter <= 'Z')
{
putchar(tolower(letter));
letter++;
}
putchar('\n');

return (0);
}