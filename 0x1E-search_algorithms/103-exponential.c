#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @start: start idx
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @end: end idx
 * Return: ndex where value is located or -1
 */

int binary_search(int *array, size_t start, size_t end, int value)
{
        size_t inx ;

        if (array == NULL)
                return (-1);
        while (start <= end)
        {
                inx = (start + end) / 2;
                print_arr(array, start, end);
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
	high = min(bound, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, low, high, value));
}
