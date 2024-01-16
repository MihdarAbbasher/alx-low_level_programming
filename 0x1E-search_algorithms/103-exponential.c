#include "search_algos.h"


/**
 * print_arr - print arr form start to end
 * @array: arr to print
 * @start: start index
 * @end: end index
 * Return: void
 */

void print_arr(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		printf(", ");
	}
	printf("%d\n", array[i]);
}

/**
 * binary_search2 - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @start: start idx
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @end: end idx
 * Return: ndex where value is located or -1
 */

int binary_search2(int *array, size_t start, size_t end, int value)
{
	size_t inx;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		print_arr(array, start, end);
		inx = (start + end) / 2;
		if (array[inx] == value)
			return (inx);
		else if (array[inx] < value)
			start = inx + 1;
		else
			end = inx - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	if (bound >= size)
		high = size - 1;
	else
		high = bound;
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search2(array, low, high, value));
}
