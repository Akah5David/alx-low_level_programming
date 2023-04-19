#include <stdio.h>
#include "dog.h"

/**
 * init_dog - does not return any integer
 * d: hjlhjhjhj
 * name: kjlkjgklglk
 * age: lhjhjhfj
 * owner: jkhfkjhfkjhj
 * Return:  0 is returned if the program is successful
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}

}
