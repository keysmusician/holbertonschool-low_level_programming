#include "dog.h"
#include <stdlib.h>

/**
 * string_length - Returns the length of a string including the null byte
 * @string: String to process
 * Return: String length including null byte, 0 if string is NULL
 */
unsigned int string_length(char *string)
{
	unsigned int i = 0;

	if (string == NULL)
		return (0);

	while (string[i++])
	{
		continue;
	}
	return (i);
}

/**
 * string_copy - Copies a string into new memory
 * @string: String to copy
 * Return: Pointer to memory with the copied string, NULL on failure
 */
char *string_copy(char *string)
{
	char *string_p;
	unsigned int i, length = string_length(string);

	string_p = malloc(length);
	if (string_p == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		*string_p = string[i];
	}
	return (string_p);
}

/**
 * new_dog - Creates a new dog_t
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Return: Void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *dog_p = malloc(sizeof(dog_t));
	char *name_p = string_copy(name);
	char *owner_p = string_copy(owner);

	if (dog_p == NULL || name_p = NULL || owner_p == NULL)
	{
		free(dog_p);
		free(name_p);
		free(owner_p);
		return (NULL);
	}
	new_dog.name = name_p;
	new_dog.age = age;
	new_dog.owner = owner_p;
	*dog_p = new_dog;

	return (dog_p);
}
