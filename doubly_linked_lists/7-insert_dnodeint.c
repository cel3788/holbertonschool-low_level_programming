#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node into a doubly linked list at a given index
 * @head: Double pointer to the start of the list
 * @idx: Index to insert new node at
 * @n: Value to assign to new node
 * Return: Address of the new node, NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
    unsigned int pos;
    dlistint_t *new_node, *current, *prev;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    if (*head != NULL)
    {
        prev = NULL;
        current = *head;

        // Check if idx is greater than the length of the list
        if (idx > 0)
        {
            for (pos = 0; pos < idx && current != NULL; pos++)
            {
                prev = current;
                current = current->next;
            }
        }

        if (pos == idx)
        {
            new_node->n = n;
            new_node->prev = prev;

            if (current != NULL)
                current->prev = new_node;

            new_node->next = current;

            if (idx != 0)
                prev->next = new_node;
            else
                *head = new_node;

            return (new_node);
        }
        free(new_node);  // Free the allocated memory if insertion fails
        return (NULL);
    }

    // Handling the case when the list is empty
    new_node->next = NULL;
    new_node->prev = NULL;
    new_node->n = n;
    *head = new_node;
    return (new_node);
}

