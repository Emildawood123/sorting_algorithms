#include "sort.h"
 /**
  * insertion_sort_list - that funcation sort list by insertion sort
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
            if (temp->next == NULL)
            {
            item->prev->next = temp;
            item->next = NULL;
            temp->prev = item->prev;
            item->prev = temp;
            temp->next = item;
            print_list(*list);
            item = *list;
            }
            else if (item->prev == NULL)
            {
            temp->prev =  NULL;
            item->prev = temp;
            item->next = temp->next;
            temp->next = item;
            print_list(temp);
            *list = temp;
            item = *list;
            }
            else
            {
            item->prev->next = temp;
            temp->prev = item->prev;
            temp->next->prev = item;
            item->next = temp->next;
            temp->next = item;
            item->prev = temp;
            print_list(*list);
            item = *list;
            }
        }
        else
        {
        item = item->next;
        }
    }
}