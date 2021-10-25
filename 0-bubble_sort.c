#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using bubble sort
 * @array: pointer that have lists of integers
 * @size: size of lists
 */
void bubble_sort(int *array, size_t size)
{
unsigned int swap = 0, i, j;
unsigned int swapped;
if (!array  || size < 2)
return;
for (i = 0; i < size; i++)
{
for (j = size - 1; j > i; j--)
{
if (array[j] < array[j - 1])
{
swapped = array[j];
array[j] = array[j - 1];
array[j - 1] = temp;
}
}
}
}
