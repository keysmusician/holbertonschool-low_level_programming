#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog_t
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *dog_space = malloc(sizeof(dog_t));

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;
	if (dog_space == NULL)
		return (NULL);
	*dog_space = new_dog;

	return (dog_space);
}
