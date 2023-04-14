#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - return the new_ptr and frees the former ptr
 * @ptr: old pointer allocated with malloc(old_size)
 * @old_size: contains the byte size allocated by malloc to
 * old ptr.
 * @new_size: gives it's value as byte to new pointer
 *
 * Return: returns new_ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
int *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
ptr = malloc(old_size);
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
if (ptr == NULL)
{
return (new_ptr);
}
if (new_size <= old_size)
{
memcpy(new_ptr, ptr, new_size);
}
else
{
memcpy(new_ptr, ptr, old_size);
}
free(ptr);
return (new_ptr);
}
