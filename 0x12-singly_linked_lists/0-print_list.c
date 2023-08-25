#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @listPointer: pointer to the list_t list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *listPointer)
{
	size_t nn = 0;

	while (listPointer)
	{
		if (!listPointer->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", listPointer->len, listPointer->str);
		listPointer = listPointer->next;
		nn++;
	}

	return (nn);
}
