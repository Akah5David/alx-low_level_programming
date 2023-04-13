#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - returns the ptr to allocated memeory
 * @nmemb: variable that reeceives pointer
 * @size: dictate the siize
 *
 * Return: return pointer if true
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size);
return (ptr);
}
