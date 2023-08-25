#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @listPointer: pointer to the list_t list
 *
 * Return: number of elements in listPointer
 */
size_t list_len(const list_t *listPointer)
{
	size_t n = 0;

	while (listPointer)
	{
		n++;
		listPointer = listPointer->next;
	}
	return (n);
}
