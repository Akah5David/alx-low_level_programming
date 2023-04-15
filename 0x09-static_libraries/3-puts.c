#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * _puts - prints in an interger c and returns an integer
 * @s: rec
 */


void _puts(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
write(1, &s[i], 1);

write(1, "\n", 1);
}
