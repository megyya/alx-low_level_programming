#include <stdlib.h>
#include "dog.h"
/**
* init_dog - initializes variable dog
* @d: dog initialize
* @name: dog's name to initialize
* @age: dog's age to initialize
* @owner: dog's owner to initialize
*
* Return : void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
