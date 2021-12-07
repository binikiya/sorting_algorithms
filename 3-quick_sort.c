#include "sort.h"

/**
 * swap - swaps two integers in an array and prints the array
 * @a: first number
 * @b: second number
 * @array: the arry to be printed
 * @size: size of the array
 */
void swap(int *a, int *b, int *array, size_t size)
{
int tmp = *a;
*a = *b;
*b = tmp;
print_array(array, size);
}

/**
 * quick_sort_rec - a recursive implementation of the quick sort algorithm
 * @array: the array to be sorted
 * @size: the length of the array
 * @beg: the begning of the usnorted subset of the array from the left
 *    [1,2,4,3,7,6,8] in this case index 2
 * @end: the begning of the unsorted subset of the array from the right
 */
void quick_sort_rec(int *array, size_t size, size_t beg, size_t end)
{
int pivot;
size_t l = beg, r = end - 1;
unsigned int lfound = 0, rfound = 0;
if (end <= beg || size <= 1)
return;
if (end == beg + 1)
{
if (array[beg] > array[end])
swap(array + beg, array + end, array, size);
return;
}
pivot = array[end];
while (l < end)
{
if (l >= r)
{
if (lfound)
swap(array + end, array + r, array, size), beg += 1;
else if (rfound)
end -= 1;
else
swap(array + end, array + l, array, size);
quick_sort_rec(array, size, beg, end);
break;
}
if (array[l] >= pivot)
lfound = 1;
if (array[r] < pivot)
rfound = 1;
if (!lfound)
l++;
if (!rfound)
r--;
if (lfound && rfound)
{
swap(array + l, array + r, array, size);
lfound = 0, rfound = 0;
}
}
}

/**
 * quick_sort - an implementation of the quick sort algorithm
 * @array: the array to be sorted
 * @size: the length of the array
 */
void quick_sort(int *array, size_t size)
{
quick_sort_rec(array, size, 0, size - 1);
}
