#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: The elements in the list
 *
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
