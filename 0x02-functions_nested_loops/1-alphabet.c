#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Description: Call print_alphabet
 *
 * Return: Always 0 (Success)
 */


/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
        char letter = 'a';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
        }

        putchar('\n');
}


int main(void)
{
	print_alphabet();
	return (0);
}
