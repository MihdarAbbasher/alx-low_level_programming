#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* print_times_table - print the alphabet
* @n: int value
* Return: void
*/
void print_times_table(int n)
{
	/**
 * print_spaces - This functions prints commas and spaces
 * @n: is a intenger define the number of spaces
* Description: this function prints a comma and spaces
* Return: no return a void function.
 */
void print_spaces(int n)
{
	int i;

	_putchar(',');

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
/**
 * print_times_table - This functions prints times table
 * @n: the table to print
(* a blank line
 * Description: this function print times table)?
(* section header: the header file for this function is holberton.h)*
 * Return: no return a void function.
 */
void print_times_table(int n)
{
	int table, number, r;

	if (n < 0 || n > 15)
		return;
	for (table = 0; table <= n; table++)
	{
		for (number = 0; number <= n; number++)
		{

			r = table * number;
			if (r < 10)
			{
				if (number)
					print_spaces(3);
				_putchar(r + '0');
			}
			else if (r >= 10 && r < 100)
			{
				print_spaces(2);
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if (r >= 100)
			{
				print_spaces(1);
				_putchar((r / 100) + '0');
				_putchar(((r / 10) % 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
}
