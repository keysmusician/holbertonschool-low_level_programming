#include "holberton.h"

/**
 * clear_bit - clears the value of a bit at a given index (sets to 0)
 * @n: binary number
 * @index: index of the desired bit
 * Return: 1 on success, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	return (1);
}
