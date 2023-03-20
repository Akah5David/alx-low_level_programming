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
printf("it is positive\n");
}
else if (n == 0)
{
printf("it is zero\n");
}
else
{
printf("it is negative\n");
}
return (0);
}

