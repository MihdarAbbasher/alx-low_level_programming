#include "main.h"
/**
  * _atoi - convert string to int
  * @s: the string
  * Return: int
  */
int _atoi(char *s)
{
	int counter, sign;
	unsigned int number;

	sign = 1;
	counter = 0;
	number = 0;


	while ((s[counter] < '0' || s[counter] > '9') && (s[counter] != '\0'))
	{
		if (s[counter] == '-')
			sign *= -1;
		counter++;
	}
	while ((s[counter] >= '0') && (s[counter] <= '9'))
	{
		number = number * 10 + (s[counter] - '0');
		counter++;
	}
	return (number * sign);
}
