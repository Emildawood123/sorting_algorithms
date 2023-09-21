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
int *curr;
int num;
int swapped;
size_t i, j;
for (i = 0; i < size; i++)
{
j = i + 1;
num = array[i];
swapped = 0;
while (j < size)
{

if (num > array[j])
{
num = array[j];
curr = &array[j];
swapped = 1;
}
j++;
}
if (swapped == 0)
{
continue;
}
swap(&array[i], curr);
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
