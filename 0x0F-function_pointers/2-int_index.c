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
	int i, res, tmp;

	res = -1;
	for (i = 0; i < size; i++)
	{
		tmp = cmp(array[i]);
		if (tmp != 0)
		{
			res = i;
			break;
		}
	}
	return (res);
}
