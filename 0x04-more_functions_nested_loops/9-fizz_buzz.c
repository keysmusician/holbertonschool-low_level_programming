#include <stdio.h>

/**
 * fizz_buzz - prints 1-100; prints "Fizz" on multiples of 3,
 * "Buzz" on multiples of 5, FizzBuzz on multiples of both
 * Return: void
 */
void fizz_buzz(void)
{
	int n;

	for (n = 1; n <= 99; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		printf(" ");
	}
	printf("Buzz");
	putchar('\n');
}

/**
 * main - calls fizz_buzz
 * Return: 0 (success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
