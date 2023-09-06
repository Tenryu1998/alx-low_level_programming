#include "main.h"

/**
* str_length - a function that counts the number of
* characters in a string
* @str: string
*
* Return: length of the string
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

/**
* word_count - counts the number of words in a string
* @str: string
*
* Return: number of words in a string
*/
int word_count(char *str)
{
	int i = 0, words = 0;

	while (i <= len(str))
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
