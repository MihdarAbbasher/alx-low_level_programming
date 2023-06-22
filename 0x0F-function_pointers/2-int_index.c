#include <stddef.h>
/**
* int_index - check the code
* @array: arr object
* @size: size
* @cmp: func name
* Return: Always void.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}

	return (-1);
}
