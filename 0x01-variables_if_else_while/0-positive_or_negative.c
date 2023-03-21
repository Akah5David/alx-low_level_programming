#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints random value for n each time the code is run
 *
 * Description: coditions are set for each vlaue n may have, the conditions
 * are positive, zero, negative.
 * Return: returns 0 always if successful
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}

