#include "holberton.h"
/* Libraries included below for testing */
#include <stdio.h>
#include <stdlib.h>

/**
 * format_pointer - formats a pointer as a hex string
 * @argument: parameter to interpret as a pointer
 * Return: value
 */
char *format_pointer(char *argument)
{
	void *pointer;
	char *pointer_string;
	long unsigned int number;

	pointer = argument;
	if (!pointer)
		return (NULL);
	pointer_string = malloc(10);
	if (!pointer_string)
		return (NULL);

	number = (long unsigned int) pointer;
	printf("Number: %lu", number);

	return (pointer_string);
}

int main(void)
{
	char *p = malloc(1);
	char *sp = format_pointer(p);
	printf("The pointer is: %p\nYours is: %s\nLong int size: %lu", p, sp, sizeof(long int));

	free(sp);
	free(p);
	return (0);
}
