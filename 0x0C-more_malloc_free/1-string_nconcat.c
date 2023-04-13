#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - returns a char at the end of the program
 * @s1: hjkhdsjhj
 * @s2: dhjdhkjhdjklsdjkljskljd
 * @n: jkdgkjdghksdajkhdjhjdsh
 *
 * Return: returns a character
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int lens1, lens2;
/*getting the length of s1 and s2*/
lens1 = strlen(s1);
lens2 = strlen(s2);

/*allocating memory for p*/

p = (char *)malloc(lens1 + n + 1);/*assigned first n byte of s2*/

if (p == NULL)
{
return (NULL);
}

if (s1 == NULL && s2 == NULL) /*treating NULL as empty string*/
{
s1 = "";
s2 = "";
}

if (n >= lens2)
{
n = lens2;/*using entire length 0f s2 if n >= lens2*/
}

/*copying s1 into p*/
strcpy(p, s1);

/*appending the first n byte of s2 into p*/

strncat(p, s2, n);
/*adding null-terminator to the end of the string*/

p[lens1 + n] = '\0';


return (p);

}
