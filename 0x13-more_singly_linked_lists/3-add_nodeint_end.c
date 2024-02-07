#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if
		(!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if
		(!*head)
		*head = new;
	else
	{
		listint_t *last = *head;

		while
			(last->next)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
