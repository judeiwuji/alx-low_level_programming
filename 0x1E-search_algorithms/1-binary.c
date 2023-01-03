#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: The array to be searched
 * @size: The array size
 * @value: The value been searched
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = 0;
	int n;

	if (array != NULL)
	{
		while (low <= high)
		{
			mid = floor((low + high) / 2);
			n = array[mid];

			print_array(array, low, high + 1);
			if (n < value)
				low = mid + 1;
			else if (n > value)
				high = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}

/**
 * print_array - Prints a given array
 * @array: the array
 * @start: start index
 * @end: end index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i + 1 < end)
			printf(", ");
	}
	printf("\n");
}
