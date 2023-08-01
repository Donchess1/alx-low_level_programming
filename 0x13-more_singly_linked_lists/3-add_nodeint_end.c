#include"lists.h"
/**
  *add_nodeint_end-adds a node to the lists' end
  *@head: pointer to the head of the list
  *@n: data aspect of the node
  *Return: the address of the new element, or NULL if it failed
  **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
