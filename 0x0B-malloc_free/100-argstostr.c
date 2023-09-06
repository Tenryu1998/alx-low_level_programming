#include "main.h"
#include <string.h>

/**
* argstostr - a function that concatenates all the arguments of your program
* @ac: count of args passed to the function
* @av:array of arguments
*
* Return: pointer to the new string
*/

int str_length(const char *str)
{
	int length = 0;
	if (str != NULL)
	{
		while (str[length] != '\0')
			length++;
	}

	return (length);
}

char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int total_length = 0;
	int arg_length;
	int i, j;
	int current_position = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
		total_length += str_length(av[i]) + 1;

	concatenated_str = (char *)malloc(total_length + 1);

	if (concatenated_str == NULL)
		return (NULL);

	/**
	 * Concatenate the arguments with newline characters
	 */
	for (i = 0; i < ac; i++)
	{
		arg_length = str_length(av[i]);

		for (j = 0; j < arg_length; j++)
			concatenated_str[current_position++] = av[i][j];

		concatenated_str[current_position++] = '\n';
	}

	/**
	 * Null-terminate the concatenated string
	 */
	concatenated_str[current_position] = '\0';

	return (concatenated_str);
}
