#include "main.h"

/**
* str_length - a function that counts the number of
* characters in a string
* @str: string
*
* Return: length of the string
*/

int string_length(char *str)
{
        int length = 0;

        if (str != NULL)
        {
                while (str[length] != '\0')
                        length++;
        }

        return (length);
}

/**
* word_count - counts the number of words in a string
* @str: string
*
* Return: number of words in a string
*/
int word_count(char *str)
{
	int i = 0, words = 0;

	while (i <= string_length(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			words += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}


/**
*strtow - splits a stirng into words
*@str: string to be splitted
*
*Return: pointer to the array of splitted words
*/

char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0;
	int words = word_count(str);

	if (words == 0)
		return (NULL);

	split = (char **) malloc(sizeof(char *) * (words + 1));

	if (split == NULL)
		return (NULL);

	for (i = 0; i <= string_length(str) && words; i++)
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
			size++;
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			split[j] = (char *) malloc(sizeof(char) * size + 1);
			if (split[j] != NULL)
			{
				while (temp < size)
				{
					split[j][temp] = str[(i - size) +temp];
					temp++;
				}
				split[j][temp] = '\0';
				size = temp = 0;
				j++;
			}
			else
			{
				while (j-- >= 0)
					free(split[j]);

				free(split);
				return (NULL);
			}
		}
	}
	split[words] = NULL;
	return (split);
}
