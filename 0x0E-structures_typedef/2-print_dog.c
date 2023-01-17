#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function that prints struct dog
 * @d: the struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->owner);
}
