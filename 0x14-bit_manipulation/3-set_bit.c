/**
 * set_bit - sets the value of a bit at a given index
 * @n: binary number
 * @index: index of the desired bit
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
