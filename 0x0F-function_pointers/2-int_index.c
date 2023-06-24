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
	int i, tmp;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			tmp = cmp(array[i]);
			if (tmp)
			{
				return (i);
			}
		}
	}
	return (-1);
}
