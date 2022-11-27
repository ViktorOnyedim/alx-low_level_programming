#include "dog.h"

/**
 * init_dog - initializes a variable of type "struct dog"
 * @d: name of structure variable
 * @name: member (dog variable)
 * @age: member (age variable)
 * @owner: member (owner variable)
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
