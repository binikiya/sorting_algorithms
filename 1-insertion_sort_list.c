#include "sort.h"

/**
 * swapped - swaps two numbers
 * @curr: current node
 * @h: head of the doubly linked list
 */
void swapped(listint_t *curr, listint_t **h)
{
listint_t temp = NULL;
temp = curr->prev;
if (curr->next)
curr->next->prev = temp;
if (temp->prev)
temp->prev->next = curr;
else
*head = current;
curr->prev = curr->prev->prev;
temp->next = curr->next;
temp->prev = curr;
curr->next = tmp;
}

/**
 * insertion_sort_list - sort the list using insertion sort
 * @list: pointer of lists that have integer
 */
void insertion_sort_list(listint_t **list)
{
listint_t *temp = NULL;
listint_t *current = NULL, *prev = NULL;
if (!list)
return;
temp = *list;
while (temp)
{
prev = temp->prev;
while (prev)
{
if (temp->n >= prev->n)
break;
swapped(temp, list);
current = prev;
prev = temp;
temp = current;
prev = prev->prev;
temp = temp->prev;
}
temp = temp->next;
}
}
	  
