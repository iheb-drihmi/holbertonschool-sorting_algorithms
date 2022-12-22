#include "sort.h"
/**
 * bubble_sort - a function that sorts an array of integers
 * @array: an array
 * @size: the size of the array
 * Return: return
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t a, b;

	if (array == NULL || size == 0)
		return;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				tmp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
