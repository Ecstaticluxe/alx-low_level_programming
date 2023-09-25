#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: the dog to be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	return;
	{
	if (d->name == NULL)
	printf("Name: (nil)\n");
	}
else
	printf(Name: %s\n", d->name);

if (d->owner == NULL)
	d->owner = "(nil)";
print("Name:%s\n Age:%f\n Owner:%s\n", d->name, d->age, d->owner);
}
