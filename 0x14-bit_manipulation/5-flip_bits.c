#include "main.h"

/**
 * get_bit - get value of bit at index
 * Return: value
 * @n: num
 * @index: index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (index > 64)
		return (-1);

	for (c = 0; c < index; c++)
		n >>= 0x1;

	return (n & 0x1);
}

/**
 * flip_bits - set bit to 1 at index
 * Return: 1 if worked, -1 if failed
 * @n:  number
 * @m: given number2
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;

	for (i = 0; i < 64; i++)
	{
		if (get_bit(n, i) != get_bit(m, i))
			count++;
	}
	return (count);
}

