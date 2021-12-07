#include "sort.h"

/**
 * swap - swaps two integers in an array
 * @a: first number
 * @b: second number
 */
void swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * bubble_sort - sorts an array of integers using bubble sort
 * @array: pointer that have lists of integers
 * @size: size of lists
 */
void bubble_sort(int *array, size_t size)
{
unsigned int i, j;
unsigned int temp = 0;
if (!array  || size < 2)
return;
for (i = 0; i < size; i++)
{
j = 0;
while (j < size - 1)
{
if (array[j] > array[j + 1])
{
swap(array + j, array + j + 1);
temp = 1;
print_array(array, size);
}
else
j++;
}
if (!temp)
return;
}
}
