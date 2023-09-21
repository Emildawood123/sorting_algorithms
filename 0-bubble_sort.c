#include "sort.h"
/**
 * bubble_sort - that funcation sort array by bubble.
 * @array: array
 * @size: size of arr
 * Return: void
*/
void bubble_sort(int *array, size_t size)
{
long unsigned int i, j;
int swapped;
for (i = 0; i < size - 1; i++)
{
swapped = 0;
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
swapped = 1;
print_array(array, size);
}
}
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
