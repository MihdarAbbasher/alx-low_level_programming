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
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
 * @size: is the number of elements in array
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * Return: ndex where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t inx, start, end;

	if (array == NULL)
		return (-1);
	inx = size / 2;
	start = 0;
	end = size - 1;
	while (1)
	{
		print_arr(array, start, end);
		if (array[inx] == value)
			return (inx);
		else if (inx == start)
			break;
		else if (array[inx] < value)
			start = inx;
		else
			end = inx;
		inx = (start + end) / 2;
	}
	return (-1);
}

