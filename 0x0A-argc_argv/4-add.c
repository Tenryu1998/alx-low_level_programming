#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	int j;

	for ( ; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[i]);
	}


	printf("%d\n", sum);
	return (0);
}
