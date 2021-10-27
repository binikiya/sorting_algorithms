#include "sort.h"

/**
 * selection_sort - swaps list of integers using selection sorts
 * @array: lists of integers to be sorted
 * @size: size of the list
 */
void selection_sort(int *array, size_t size)
{
unsigned int i, j, min;
int temp;
for (i = 0; i < size; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
min = j;
}
temp = array[min];
array[min] = array[i];
array[i] = temp;
}
}
