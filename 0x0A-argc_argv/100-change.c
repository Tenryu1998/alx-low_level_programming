#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the minimum number of coins to make change
* for an amount of money
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 1 if there is an error; else returns 0
*/

int main(int argc, char *argv[])
{
	int cents;
	int i;
	int coinVals[] = {25, 10, 5, 2, 1};
	int coins = 0;
	int largestCoinVal;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (1 > 0)
	{
		largestCoinVal = 0;

		for (i = 0; i < 5; i++)
		{
			if (cents >= coinVals[i] && coinVals[i] > largestCoinVal)
				largestCoinVal = coinVals[i];
		}
		
		if (largestCoinVal > 0 && cents > 0)
		{
			coins++;
			cents = cents - largestCoinVal;
			continue;
		}
		break;
	}
	
	printf("%d\n", coins);
	return (0);
}
