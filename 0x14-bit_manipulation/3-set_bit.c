/**
 * set_bit - sets the value of a bit at a given index
 * @n: binary number
 * @index: index of the desired bit
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1 << index);
	return (index > 63 ? -1 : 1);
}
