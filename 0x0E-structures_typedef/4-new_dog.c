#include <stdio.h>
#include "dog.h"


/**
* init_dog - check the code
* @d: dog object
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: Always 0.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

/**
* new_dog - create a dog
* @name: dog object
* @age: dog object
* @owner: dog object
* Return:  NULL or dog_t.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	dog_t mydog;

	_dog = &mydog;
	init_dog(_dog, name, age, owner);
	if (_dog == NULL)
	{
		return (NULL);
	}
	return (_dog);
}
