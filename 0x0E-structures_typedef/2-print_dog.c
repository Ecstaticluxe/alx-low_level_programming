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
	d->name = "(nil)";
	}
if (d->owner == NULL)
	d->owner = "(nil)";
printf ("Name:%s\n Age:%f\n Owner:%s\n", d->name, d->age, d->owner);
}
