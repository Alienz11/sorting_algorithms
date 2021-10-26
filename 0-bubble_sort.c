#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array by comparing each index value with each other.
 * @array: Argument pointing to an external array.
 * @size: Argument for the size of the array
 * Return: No return value (Void)
 */

void bubble_sort(int *array, size_t size)
{
size_t i, j;
int temp;

i = size;

while (i > 1)
{
j = 0;
while (j < i)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
j++;
}
i--;
}
print_array(array, size);
}
