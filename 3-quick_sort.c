#include "sort.h"


/**
 * swap - swaps two values
 * @a: first value
 * @b: second value
 */
void swap(int *a, int *b)
{
int t = *a;
*a = *b;
*b = t;
}

/**
 * partition - partitions the list in to two
 * @arr: list of array
 * @low: lowest value
 * @high: highest value
 *
 * Return: value
 */
int partition(int *arr, int low, int high)
{
int j;
int pivot = arr[high];
int i = low - 1;
for (j = low; j < high; j++)
{
if (arr[j] < pivot)
{
i++;
swap(&arr[i], &arr[j]);
}
}
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}

/**
 * quick_sort - sorts list of integers using quick sort
 * @array: Pointers that have list of integers
 * @size: size of the list
 */
void quick_sort(int *array, size_t size)
{
if (array[0] < array[size - 1])
{
int pi = partition(array, 0, size - 1);
quick_sort(array, pi - 1);
quick_sort(array, pi + 1);
}
}
