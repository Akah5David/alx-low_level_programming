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
void *new_ptr;
unsigned int copy_size;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}

new_ptr = malloc(new_size);
copy_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);
free(ptr);
return (new_ptr);
}
