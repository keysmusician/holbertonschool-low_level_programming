#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: binary number
 * @index: index of the desired bit
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
