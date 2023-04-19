#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* print_dog - prints a dog struct
* @d: struct dog to print
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->name ? d->name : "(nil)");
}
}
