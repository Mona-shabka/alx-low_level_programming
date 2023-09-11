#include "dog.h"
#include <stdlib.h>

/**
* strlen - a function that return length of string.
* @mon: input string.
* Return: length of string.
*/

int strlen(const char *mon)
{
	int length = 0;

	while (*mon++)
		length++;
	return (length);
}

/**
* strcopy - a function that prints string to another string.
* @new: new string that receive string.
* @mon: string that copy happen from it.
* Return: new string.
*/

char *strcopy(char *new, char *mon)
{
	int length;

	for (length = 0; mon[length]; length++)
		new[length] = mon[length];
	new[length] = '\0';
	return (new);
}

/**
* new_dog - a function that creates a new dog.
* @name: name of dog.
* @age: age of dog.
* @owner: owner name of dog.
* Return: null (function fail) or string pointer of dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || !owner || age < 0)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = strcopy(dog->name, name);
	dog->age = age;
	dog->owner = strcopy(dog->owner, owner);
	return (dog);
}
