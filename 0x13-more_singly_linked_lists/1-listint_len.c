#include<stdio.h>
#include"lists.h"
/**
  *listint_len- prints the lenght of the list
  *@h: header printer
  *
  *Return: number of elements in the list
**/
size_t listint_len(const listint_t *h)
{
	int b = 0;

	while (h)
	{
		if (!h->n)
			continue;
		else
		{
			b++;
			h = h->next;
		}
	}
	return (b);

}
