/**
 * calculate_root - Compares n to various square numbers
 * @n: Number to find root of
 * @root: Then natural square root of n if it exits
 * Return: Root if exists, -1 if not
 */
int calculate_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);

	return (calculate_root(n, root + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n : Number
 * Return: Natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calculate_root(n, 1));
}
