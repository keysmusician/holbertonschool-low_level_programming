#include <stdio.h>

/**
 * main - Entry point for alphabet printing function
 * Return: 0-status code
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == '9' && num2 == '9')
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar(10);

	return (0);
}
