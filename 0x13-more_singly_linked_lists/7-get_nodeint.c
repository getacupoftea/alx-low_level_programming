#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	/* loop through the linked list until you reach the desired index */
	for (node = 0; node < index; node++)
	{
		/* if the end of the list is reached before the desired index, return NULL */
		if (head == NULL)
			return (NULL);

		/* move to the next node */
		head = head->next;
	}

	/* return the node at the desired index */
	return (head);
}
