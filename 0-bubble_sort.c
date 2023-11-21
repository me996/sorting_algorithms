#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, j, n = size;
int flag;
if (array == NULL || size < 2)
return;
for (i = 0; i < n - 1; i++)
{
flag = 0;
for (j = 0; j < n - 1 - i; j++)
{
if (array[j] > array[j + 1])
{
swap(array + j, array + j + 1);
print_array(array, size);
flag = 1;
}
}
if (flag == 0)
break;
}
}


