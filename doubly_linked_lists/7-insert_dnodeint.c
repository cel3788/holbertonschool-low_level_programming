#include "lists.h"
/**
 * get_nodeint_at_index - get the node
 * @head: head
 * @index: index
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;

	while (count < idx)
	{

		if ((*h)->next == NULL)
		{
			return (NULL);
		}
		else
		{
			count++;
			*h =(*h)->next;
		}
	}
	return (*h);
}
