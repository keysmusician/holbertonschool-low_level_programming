/**
 * check_factors - Tests for factors of n
 * @is_prime: Prime candidate
 * @factor: Factor candidate
 * Return: 1 if is_prime is prime, 0 if is_prime is composite (not prime)
 */
int check_factors(int prime, int factor)
{
	if (factor > prime / 2)
		return (1);

	if (prime % factor == 0)
		return (0);

	return (check_factors(prime, factor + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n : Number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == -1 || n == 1)
		return 0;

	return (check_factors(n, 2));
}
