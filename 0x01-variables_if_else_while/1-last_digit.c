#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = abs(n % 10);
	printf("Last digit of %d is ", n);

	if (n >= 0)
	{

		if (lastDigit > 5)
			printf("%d and is greater than 5\n", lastDigit);
		else if (lastDigit == 0)
			printf("%d and is 0\n", lastDigit);
		else if (lastDigit < 6 && lastDigit != 0)
			printf("%d and is less than 6 and not 0\n", lastDigit);
	}
	else
	{
		lastDigit = lastDigit * -1;
		if (lastDigit > 5)
			printf("%d and is greater than 5\n", lastDigit);
		else if (lastDigit == 0)
			printf("%d and is 0\n", lastDigit);
		else if (lastDigit < 6 && lastDigit != 0)
			printf("%d and is less than 6 and not 0\n", lastDigit);
	}

	return (0);
}
