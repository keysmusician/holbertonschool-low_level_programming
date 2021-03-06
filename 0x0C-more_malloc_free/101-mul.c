#include <stdio.h> 		/* For printf() */
#include <stdlib.h> 		/* exit(), malloc() */

/* We need to allocate memory for the result */

/* Find lengths of both strings */

/* Also check for non-digits, and return ERROR if found */

/* Add lengths of the strings to get the size of memory we need */

/* Itterate over each string to calculate the multiplication */

/* Itterate over allocated memory to print each int (result) */


/* Test function */
void display_array(int *array, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		printf("%d", array[i]);
	printf("\n");
}


unsigned int get_length_and_validate_string(char *string)
{
	unsigned int i = 0;

/* Gets the length of string */
/* And checks for non-digit characters */
	while(string[i])
	{
		if(string[i] < '0' || string[i] > '9')
		{
			/* printf("Non-digit "); */
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	return i;
}

int power(int base, int exponent)
{
	int power = base;

	if (exponent == 0)
		return (1);

	for (; exponent > 0; exponent--)
	{
		power *= base;
	}

	return (power);
}

int main(int argc, char **argv)
{
/* Strings could have massive lengths */
/* Unsigned int doubles the max int size */
	int *result;
	char *string1, *string2;
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	int i, x, size_of_array, s1_digit, s2_digit, product, digit_length, product_index, temp;

/* Ensure we are passed two arguments */
/* Note argc is 1 when no arguments are passed) */
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

/* Assign the strings to a readable names */
	string1 = argv[1];
	string2 = argv[2];

/* Get string lengths and ensure they only contain digits */
/* Checking validity in the same function for efficiency -- */
/* No sense looping the same string twice */
/* Length does NOT include the null terminator */
	s1_length = get_length_and_validate_string(string1);
	s2_length = get_length_and_validate_string(string2);
	size_of_array = s1_length + s2_length;
	/* printf("Size_of_array = %d\n", size_of_array); */

	result = malloc(size_of_array * sizeof(int));
	/* Error check */
	if(result == NULL)
	{
		printf("Error");
		exit(98);
	}
	/* printf("Memory sucessfully allocated at %p\n", (void *)result); */

	/* Initialize memory to 0 */
	for (i = 0; i < size_of_array; i++)
		result[i] = 0;

	/* Calculate product via long multiplication */
	for (i = s1_length - 1; i >= 0; i--)
	{
		s1_digit = string1[i] - '0';
		/* printf("Outer loop itteration: %d\n", s1_length - i); */

		for (x = s2_length - 1; x >= 0; x--)
		{
			s2_digit = string2[x] - '0';
			product_index = size_of_array - (s2_length - x) - (s1_length - i) + 1;
			product = s1_digit * s2_digit;

			/* printf("s2_digit * s1_digit = %d\n", s2_digit * s1_digit); */

			/* split two-digit numbers into two one-digit numbers */
			/* Turns out this if statement is actually unneccessary */
			if(product > 10)
			{
				/* Ones place */
				result[product_index] += product % 10;

				/* Tens place */
				result[product_index - 1] += product / 10;
			}
			else
			{
				result[product_index] += product;
			}

			while (product_index >= 0 && result[product_index] >= 10)
			{
				result[product_index - 1] += result[product_index] / 10;
				result[product_index] %= 10;
				product_index--;
			}
		}
	}

	/* "Flatten" array to one-digit numbers */
	for (i = size_of_array - 1; i >= 0; i--)
	{
		/* Counting the number of digits */
		temp = result[i];
		digit_length = 0;

		while (temp != 0 )
		{
			temp /= 10;
			digit_length++;
		}

		/* printf("%d has %d digits\n", result[i], digit_length); */

		for (; digit_length > 1; digit_length--)
		{
			temp = result[i];
			/* temp / power(10, digit_length - 1); */

		}

		/* result[i] %= 10; */

	}

	display_array(result, size_of_array);

	return (0);
}
