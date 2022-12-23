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

	while (1 == 1)
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

	char li [] = ", ;.!?\n\"\t(){}";
	
	res = 0;
	
	sli = _strlen(li);
		
	for (j = 0; j < sli; j++)
	{
		if (ch == li[j])
		{
			res = 1;
			printf("if: %d\n", j);
			break;
		}
	}
	printf("res #%c#: %d\n", ch, res);
	return (res);
}

void main()
{
	int s, i;
	
	char txt [] = "afe,se\"fa.ge\ns\ta df[ fe{";
	s = _strlen(txt);
	for (i = 0; i < s; i++)
	{
		is_word_separator(txt[i]);
	}
}
	


