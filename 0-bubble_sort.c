#include "sort.h"

void swap(int *a, int *b);

/**
 * bubble_sort - sort an array of integers  ascendingly
 * @array: An array of integers to be sorted.
 * @size: The array size
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool flag = true;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + (j + 1));
				print_array(array, size);
				flag = false;
			}
		}
		if (flag == true)
			break;
	}
}

/**
 * swap - Swap two integers in an array.
 * @a: 1st int to be swapped
 * @b: 2nd int to be swapped
**/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
