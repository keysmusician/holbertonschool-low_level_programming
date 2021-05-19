#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/* unsigned int ui = (unsigned int)INT_MAX + 1024; */
	/* void *addr; */
#if 0
	char str256[257] = "BuVPg4wET8bKJeWOEXONuwDf42BWxswSwpqGixCf9JZYEDI8076xxPzgy8Y5scu0bMzw3pbMwMMoH1ajB0ZfaDSnjd3qXusj2Rll4WRdWr8kdTR30T6xMchfHJMbMWwuMOqDTCbtUDaS8ooitXnLZ66KoBxdaJ8CZoYMeGrpLmhdcB2LZksQyP8ccEVHqWdYOmACW605eYgvUE8yoJGgw45QAbOM4KWpISvFlcnl0NPTyzswEwtuijcXmMxGWg8\n\0";
#endif
	/* ui = 0; */
	/* len = _printf("Let's try to printf a simple sentence.\n"); */
	/* len2 = printf("Let's try to printf a simple sentence.\n"); */

	/* addr = (void *)0x7ffe637541f0; */
	/* _printf("Length:[%d, %i]\n", len, len); */
	/* printf("Length:[%d, %i]\n", len2, len2); */
	/* _printf("Negative:[%d]\n", -762534); */
	/* printf("Negative:[%d]\n", -762534); */
	/* _printf("Unsigned:[%u]\n", ui); */
	/* printf("Unsigned:[%u]\n", ui); */
	/* len2 = _printf("Our unsigned octal:[%o]\n", ui); */
	/* len = printf("Unsigned octal:[%o]\n", ui); */
	/* _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui); */
	/* len = _printf("Character:[%c]\n", '\0'); */
	/* len2 = printf("Character:[%c]\n", '\0'); */
	/* len = _printf("%s%s%s%s", str256, str256, str256, str256); */
/* 	_printf("Address:[%p]\n", addr); */
/* 	printf("Address:[%p]\n", addr); */
	/* len = _printf("Percent:[%%]\n"); */
	/* len2 = printf("Percent:[%%]\n"); */
	/* _printf("Unknown:[%q]\n"); */
	/* printf("Unknown:[%q]\n"); */
	/* _printf("Binary:[%b]\n", 13); */
	/* len = _printf("Rot13:[%R]\n", "abcdefghij ABCDEFGHIJ"); */
	/* len = _printf("Reverse: [%r]\n", "Testing"); */
	/* len = _printf("%"); */
	/* printf("Len:[%d]\n", len); */
	/* printf("Len:[%d]\n", len2); */




/* TASK 0 CHECKS */
#if 0
	len = _printf("Let's print a simple sentence.\n");
	len = _printf("%c", 'S');
	len = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len = _printf("%s", "This sentence is retrieved from va_args!\n");
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len = _printf("%%");
	len = _printf("Should print a single percent sign: %%\n");
	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len = _printf("css%ccs%scscscs", 'T', "Test");
	len = _printf(str256);
	len = _printf("man gcc:\n%s", str256);
	len = _printf("%!\n");
	len = _printf("%K\n");

	len2 = printf(NULL);
	len = _printf(NULL);
	len2 = printf("%c", '\0');
	len = _printf("%c", '\0');

	/* Check valgrind, betty, README with desc,
	 * only required files on GitHub */

#endif
	len2 = printf("P%+4");
	len = _printf("_%+4");
	printf("_printf: %d\nprintf: %d\n", len, len2);

	return (0);
}
