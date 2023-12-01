#include "lists.h"

/**
 * delete_dnodeint_at_index - erased an innocent node
 *
 * @head: start of the list
 * @index: pos when the node to delete
 *
 * Return: 1 if success or -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;
	dlistint_t *ptr = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	temp = *head;

	while (temp->next != NULL && count < index - 1)
	{
		temp = temp->next;
		count++;
	}

	if (index < count + 1)
		return (-1);

	if (temp->next == NULL)
		return (-1);

	ptr = temp->next;
	temp->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = temp;
	free(ptr);

	return (1);
}
