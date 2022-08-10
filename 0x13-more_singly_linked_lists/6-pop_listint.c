#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list.
 *
 * @head: The pointer to the address of the head of a list
 *
 * Return: NULL if the list is empty
 *	else data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
