#include <stdio.h>

/**
 * main - Entry point for alphabet printing function
 * Return: 0-status code
 */
int main(void)
{
	/*set a*/
	int num1;
	int num2;
	/*set b*/
	int num3;
	int num4;
	int flip = 0;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = num1; num3 <= '9'; num3++)
			{
				num4 = flip ? num2 + 1 : '0';
				for (; num4 <= '9'; num4++)
				{
					flip = 0;
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (num1 == '9' && num2 == '8' &&
					    num3 == '9' && num4 == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			flip = 1;
		}
	}
	putchar(10);
	return (0);
}
