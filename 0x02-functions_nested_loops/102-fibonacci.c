#include <stdio.h>

/**
 * main - Fibonacci sequence
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int m = 1;
	unsigned int next = 0;
	int i = 0;

	next = n + m;
	n = m;
	m = next;

	while (i < 49)
	{
		printf("%u", next);
		printf(", ");
		next = n + m;
		n = m;
		m = next;
		i++;
	}
	next = n + m;
	n = m;
	m = next;

	printf("%u", next);
	putchar('\n');
	return (0);
}
