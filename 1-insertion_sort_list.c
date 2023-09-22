#include "sort.h"
/**
 * insertion_sort_list - funcation to sort by insertation
 * @list: list
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
listint_t *item = *list;
listint_t *temp;
temp = malloc(sizeof(listint_t));
while (item->next)
{
temp = item->next;
if (item->n > temp->n)
{
swap_list(&item, &temp, list);
print_list(*list);
item = *list;
}
else
{
item = item->next;
}
}
}
/**
 * swap_list - that to swap to node in linked
 * @first: first
 * @second: second
 * @list: head of linkedlist
 * Return: void
*/
void swap_list(listint_t **first, listint_t **second, listint_t **list)
{
if ((*first)->prev == NULL)
{
(*first)->next = (*second)->next;
(*second)->next->prev = *first;
(*second)->prev = NULL;
*list = *second;
}
else if ((*second)->next == NULL)
{
(*first)->prev->next = *second;
(*first)->next = NULL;
(*second)->prev = (*first)->prev;
}
else
{
(*first)->prev->next = *second;
(*second)->prev = (*first)->prev;
(*second)->next->prev = *first;
(*first)->next = (*second)->next;
}
(*second)->next = *first;
(*first)->prev = *second;
}
