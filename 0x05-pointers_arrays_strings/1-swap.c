/**
 * swap_int - swaps the values of two ints
 * @a : number to swap
 * @b : number to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
