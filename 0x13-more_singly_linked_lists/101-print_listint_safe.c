#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique node
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t to check.
 *
 * Return: the number of unique nodes in the list.
 * Otherwise, 0 - If the list is not looped.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
				nodes++;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				nodes++;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}
