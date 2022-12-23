#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * Return: int len
*/
int _strlen(char *s)
{
	int i = 0;

	while (1  == 1)
	{
		if (*(s + i) != '\0')
		{
			i += 1;
		}
		else
		{
			break;
		}
	}
	return (i);
}

/**
* is_word_separator - is_word_separator str
* @ch: dest str
* Return: 0 or 1
*/
int is_word_separator(char ch)
{
	int j,  sli, res;

	char li[] = ", \s;.!?\n\"\t(){}";

	res = 0;

	sli = _strlen(li);

	for (j = 0; j < sli; j++)
	{
		if (ch == li[j])
		{
			res = 1;
			break;
		}
	}
	return (res);
}

/**
* cap_string - uppercase word
* @txt: dest str
* Return: 0 or 1
*/

char *cap_string(char *txt)
{
	int s, i, is_sep;
	char ch;

	s = _strlen(txt) - 1;
	for (i = 0; i < s; i++)
	{
		is_sep = is_word_separator(txt[i]);
		ch = txt[i + 1];
		if (is_sep == 1 && ch >= 'a' && ch <= 'z')
		{
			txt[i + 1] -= 32;
			i++;
		}
	}
	return (txt);
}
