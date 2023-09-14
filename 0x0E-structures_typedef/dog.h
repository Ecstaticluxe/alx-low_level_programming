#ifndef DOG_H
#define DOG_H
/**
 * struct dog - element type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 */

struct dog
{
	char *name;
		float age;
		char *owner;
};

/**
 * dog_t - typedef for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner)

#endif
