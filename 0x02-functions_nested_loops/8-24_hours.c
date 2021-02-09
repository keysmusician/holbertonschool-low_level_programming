#include "holberton.h"

/**
 * jack_bauer - Prints the 24-hr format time
 * Return: void
 */
void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr < 10)
			{
				_putchar('0');
				_putchar('0' + hr);
			}
			else
			{
				_putchar('0' + hr / 10);
				_putchar('0' + hr % 10);
			}
			_putchar(':');
			if (min < 10)
			{
				_putchar('0');
				_putchar('0' + min);
			}
			else
			{
				_putchar('0' + min / 10);
				_putchar('0' + min % 10);
			}
			_putchar('\n');
		}
	}
}
