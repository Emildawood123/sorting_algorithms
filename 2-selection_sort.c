#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - that funcation sorted by selection
 * @array: array
 * @size: size
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
size_t i, j;
for (i = 0; i < size; i++)
{
j = i + 1;
while (j < size)
{
if (array[i] > array[j])
{
swap(&array[i], &array[j]);
}
j++;
}
print_array(array, size);
}
}
/**
 * swap - that swap two elements arr by address
 * @first: first
 * @second: second
 * Return: void
*/
void swap(int *first, int *second)
{
int helper = *first;
*first = *second;
*second = helper;
}
