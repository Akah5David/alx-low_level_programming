#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - returns the an array of integers ranging from
 * min value to max;
 * @min: contains min values
 * @max: contains max values of the array
 *
 * Return: return the pointer to the calling function
 */

int *array_range(int min, int max)
{
int *pointer;
int i;
if (min > max)
{
return (NULL);
}
pointer = (int *)malloc((max - min + 1) * sizeof(int));
if (pointer == NULL)
{
return (NULL);
}
for (i = 0; i <= (max - min); i++)
{
pointer[i] = min + i;
}

return (pointer);
}
