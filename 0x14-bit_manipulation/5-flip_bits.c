/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number
 * @m: number
 * Return: number of bits needed to flip to get from 'n' to 'm'
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;

	for (m = 0; n != 0; n >>= 1)
		m += n & 1;

	return (m);
}
