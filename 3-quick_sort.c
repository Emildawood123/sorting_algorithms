#include "sort.h"
/**
 * partation - that return index of ele + 1
 * @arr: array
 * @lower: low
 * @up: up
 * Return: i + 1
*/
int partation(int arr[], int lower, int up)
{
int i = (lower - 1);
int piv = arr[up];
int j = lower;
while (j < up)
{
if (arr[j] <= piv)
{
i++;
swap(&arr[i], &arr[j]);
}
j++;
}
swap(&arr[i + 1], &arr[up]);
return (i + 1);
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
/**
 * quick - to sort
 * @arr: array
 * @low: low (0)
 * @up: up (last index)
 * @size: size of array
 * Return: void
*/
void quick(int arr[], int low, int up, int size)
{
if (up > low)
{
int par = partation(arr, low, up);
quick(arr, low, par - 1, size);
quick(arr, par + 1, up, size);
print_array(arr, size);
}
}
/**
 * quick_sort - that return void
 * @array: array
 * @size: size
 * Return: void
*/
void quick_sort(int *array, size_t size)
{
quick(array, 0, size - 1, size);
}
