#include <stdio.h>

/**
 * main - Fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int m = 1;
	int next = 0;
	int sum;

	while (next < 4000000)
	{
		sum += next % 2 == 0 ? next : 0;
		next = n + m;
		n = m;
		m = next;
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
