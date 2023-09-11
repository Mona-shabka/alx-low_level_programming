#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog.
* @d: initialize to dog pointer.
* @name: name of dog.
* @age: age of dog.
* @owner: owner name of dog.
* Return: void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
