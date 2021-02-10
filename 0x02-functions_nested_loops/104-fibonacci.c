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
	int i = 0;

	next = n + m;
	n = m;
	m = next;

	while (i < 97)
	{
		printf("%lu", next);
		printf(", ");
		next = n + m;
		n = m;
		m = next;
		i++;
	}

	printf("%lu", next);
	putchar('\n');
	return (0);
}
