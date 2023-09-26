#include "sort.h"
void cocktail_sort_list(listint_t **list)
{
listint_t *item = *list;
listint_t *aft = malloc(sizeof(listint_t));
listint_t *bef = malloc(sizeof(listint_t));
int swapped;
while (item)
{
aft = item->next;
bef = item->prev;
if (item->n > aft->n)
{
swap_list(&item, &aft, list);
continue;
}
else if (item->n < bef->n)
{
swap_list(&bef, &item, list);
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