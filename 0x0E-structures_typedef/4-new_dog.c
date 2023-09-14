#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new dog to be created
 * @name: name of the dog
 *@age: age of the dog
 * @owner: owner of the dog
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner);
{
dog_t *dog;


dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
 if (dog->name == NULL)
 {
	 free(dog);
	 return (NULL):
 }
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
	free(dog);
	free(dog->name);
	return (NULL);
}

}
