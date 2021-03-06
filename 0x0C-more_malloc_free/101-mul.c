#include <stdio.h>
#include <stdlib.h>

/**
 * get_length_and_validate_string - Self explanitory
 * @string: String to process
 * Return: String length excluding null byte on success, 98 on failure
 */
unsigned int get_length_and_validate_string(char *string)
{
	unsigned int i = 0;

	while (string[i])
	{
		if (string[i] < '0' || string[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		i++;
	}
	return (i);
}

/**
 * print_int_array - Prints an array of integers
 * @array: The array of integers
 * @size: The array size
 * Return: Void
 */
void print_int_array(int *array, unsigned int size)
{
	unsigned int i;

	while (array[i] == 0 && i < size - 1)
		i++;

	for (; i < size; i++)
		printf("%d", array[i]);
	printf("\n");
}

/**
 * main - Multiplies two positive integers of arbitrary length
 * @argc: Number of command line arguments
 * @argv: Command line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int *result;
	unsigned int s1_length, s2_length;
	int i, x, size_of_array, product, product_index;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	s1_length = get_length_and_validate_string(argv[1]);
	s2_length = get_length_and_validate_string(argv[2]);
	size_of_array = s1_length + s2_length;
	result = malloc(size_of_array * sizeof(int));
	if (result == NULL)
	{
		printf("Error");
		exit(98);
	}
	for (i = 0; i < size_of_array; i++)
		result[i] = 0;
	for (i = s1_length - 1; i >= 0; i--)
	{
		for (x = s2_length - 1; x >= 0; x--)
		{
			product = (argv[1][i] - '0') * (argv[2][x] - '0');
			product_index = size_of_array - (s2_length - x) - (s1_length - i) + 1;
			result[product_index] += product % 10;
			result[product_index - 1] += product / 10;
			while (product_index >= 0 && result[product_index] >= 10)
			{
				result[product_index - 1] += result[product_index] / 10;
				result[product_index] %= 10;
				product_index--;
			}
		}
	}
	print_int_array(result, size_of_array);
	free(result);
	return (0);
}
