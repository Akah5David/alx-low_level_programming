#include <stdio.h>
#include "main.h"

/**
 * times_table - printsn the 9 times table
 *
 */

void times_table(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{
j = 0;
while (j <= 9)
{
if (j == 0)
{
j++;
k = i * j;
printf("%2d", k);
}
else if (j >= 1)
{
k = i * j;
printf(",%3d", k);
}
j++;
}
printf("\n");
}
}
