#include <stdlib.h>

#include <stdio.h>

/**
 * count_words - Counts the number of words in a string
 * @str: String
 * Return: Number of words in the string
 */
int count_words(char *str)
{
	int word_count = 0;
	int in_word = 0;
	int str_i;

	for (str_i = 0; str[str_i]; str_i++)
	{
		if (str[str_i] != ' ' && !in_word)
		{
			in_word = 1;
			word_count++;
		}
		else if (str[str_i] == ' ' && in_word)
		{
			in_word = 0;
		}
	}

	return (word_count);
}


/**
 * strtow - Splits a string into an array of words
 * @str: String to split
 * Return: Pointer to the new array, or NULL if it fails
 */
char **strtow(char *str)
{
	char **word_list = NULL;
	int word_count, word_i, str_i;
	int word_list_i = 0;
	int word_length = 0;
	int word_start = -1;

	if (str[0] == '\0' || str == NULL)
		return (NULL);
	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	word_list = malloc(sizeof(char *) * word_count + 1);
	if (word_list == NULL)
		return (NULL);
	for (str_i = 0; str[str_i]; str_i++)
	{
		if (str[str_i] != ' ')
		{
			++word_length;
			if (word_start < 0)
				word_start = str_i;
		}
		else if (word_length > 0)
		{
			word_list[word_list_i] = malloc(word_length + 1);
			if (word_list[word_list_i] == NULL)
			{
				free(word_list);
				return (NULL);
			}
			for (word_i = 0; word_i < word_length; word_i++)
				word_list[word_list_i][word_i] = str[word_start++];
			word_list[word_list_i][word_i] = '\0';
			++word_list_i;
			word_length = 0;
			word_start = -1;
		}
	}
	word_list[word_list_i] = NULL;
	return (word_list);
}
