#include "sort.h"
/**
 * shell_sort - sort by shell_sort
 * @array: array
 * @size: size
 * Return: void
*/
void shell_sort(int *array, size_t size)
{
size_t i = 0;
size_t j = 0;
int swapped;
while (i < size)
{
swapped = 0;
j = i + 1;
while (j < size)
{
if (array[i] > array[j])
{
swap(&array[i], &array[j]);
swapped = 1;
}
i++;
j = i + 1;
}
print_array(array, size);
if (swapped == 0)
{
break;
}
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
