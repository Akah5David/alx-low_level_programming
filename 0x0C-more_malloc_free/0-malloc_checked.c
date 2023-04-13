#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - returns pointer to allocated memory
 * @b: receives an unsigned in value representing the number of
 * bytes memory given to the pointer variable ptr
 *
 * Return: returns ptr if sucessful but returns 98 if not
 * successful
 */

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}

return (ptr);
}
