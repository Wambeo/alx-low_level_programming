#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a linked list.
 *
 * @head: Pointer to the address of the head of a list
 * @index: The index of the node to locate
 *
 * Return: NULL if the node does note exist
 *	else the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
