#include <stdio.h>
#include "dog.h"

/**
* print_dog - print the dog pars
* @d: dog object
* Return: Always nothing.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("name: %s\n", d->name);
	if (d->age == 0)
	{
		printf("age: (nil)\n");
	}
	else
	{
		printf("age: %f\n", d->age);
	}
	printf("owner: %s\n", d->owner);
}
