#include "lists.h"

/**
 * add_nodeint - Funtion that adds a new node at the beginning of a list
 * @head: A pointer to the address of the lists head
 * @n: The interger for the new node
 *
 * Return: Null if the funtion fails
 *	else the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
