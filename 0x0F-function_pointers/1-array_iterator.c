#include <stddef.h>
/**
* array_iterator - check the code
* @array: arr object
* @size: size
* @action: func name
* Return: Always void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
