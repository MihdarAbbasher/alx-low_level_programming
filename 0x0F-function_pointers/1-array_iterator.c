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
	unsigned int long i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
