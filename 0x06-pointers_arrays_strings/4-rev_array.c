/**
 * reverse_array - reverses the content of an array of integers
 * @a : array
 * @n : array length
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int buffer, i = 0;

	while (i < n / 2)
	{
		buffer = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = buffer;
		i++;
	}
}
