#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of the type struct dog
 * @d: pointer to the struct of the dog to initialize
 * @name: name of the dog to initialize
 * @age: age of the dog to initialize
 * @owner: the owner of the dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
