#include <stdio.h>

/**
 * main - Fibonacci sequence
 * Return: 0
 */
int main(void)
{
	unsigned long int n = 0;
	unsigned long int m = 1;
	unsigned long int next = 0;
	unsigned long int sum;

	while (next < 4000000)
	{
		sum += next % 2 == 0 ? next : 0;
		next = n + m;
		n = m;
		m = next;
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}
