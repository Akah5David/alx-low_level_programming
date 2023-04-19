#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * d: pointer that points to different variables within struct
 *
 * Return: returns noithing 
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}
