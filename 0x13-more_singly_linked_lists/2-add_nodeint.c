#include<stdio.h>
#include"lists.h"
#include<stdlib.h>
/**
  *add_nodeint-add nodesto the list
  *@head: head if the list
  *@n:data for the new node
  *Return:address to the new element
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		printf("error\n");
	return (NULL);
	}
	else
	{
		new->n = n;
		new->next = (*head);
		(*head) = new;
	}

	return (new);
}
