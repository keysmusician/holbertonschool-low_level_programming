#include <stdio.h>

/**
 * main - Entry point for alphabet printing function
 * Return: 0-status code
 */
int main(void)
{
	int num1, num2, num3, num4;
	int flip = 0;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			for (num3 = num1; num3 <= '9'; num3++)
			{
				num4 = (flip && num2 != '9') ? num2 + 1 : '0';
				for (; num4 <= '9'; num4++)
				{
					flip = 0;
					if (num3 >= num1)
					{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					if (num1 == '9' && num2 == '8'
					    && num3 == '9' &&
					    num4 == '9')
					{
						goto end;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
			flip = 1;
		}
	}
end:
	putchar(10);
	return (0);
}
