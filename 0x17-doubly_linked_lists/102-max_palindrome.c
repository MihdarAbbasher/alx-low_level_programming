#include <stdio.h>
#include <stdlib.h>


/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int index)
{
	if (index >= len - index - 1)
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}


/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);


	if (!(*s))
		return (1);
	return (check_palindrome(s, len, index));
}

char *int_to_str(int n)
{
	int i;
	char *s;
	s = malloc(sizeof(char) * 10);
	if (!s)
		return (NULL);
	for (i = 0; i < 10 && n != 0; i++)
	{
		s[i] = (n % 10) + 48;
		n /= 10;
	}
	s[i] = '\0';
	return (s);
}

/**
 * is_palind - check if no is palindrome
 * @n: num
 * Retrun: 1 if yes, 0 if no
 */

int max_palind()
{
	int x, y, res, max, is_pal;
	char *s;

	max = 0;
	for (x = 100; x < 1000; x++)
	{
		for (y = 100; y < 1000; y++)
		{
			res = x * y;
			s = int_to_str(res);
			is_pal = is_palindrome(s);
			if (res > max && is_pal)
				max = res;
		}
	}
	return (max);
}

