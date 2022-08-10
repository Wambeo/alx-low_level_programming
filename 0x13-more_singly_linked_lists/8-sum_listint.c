#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data(n) of list
 * @head: The pointer to the head of the list
 *
 * Return: 0 if the list is empty
 *	else the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
