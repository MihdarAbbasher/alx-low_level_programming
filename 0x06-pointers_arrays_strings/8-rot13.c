#include "main.h"
/**
  * rot13 - encode a string with rot13
  * @p: the string
  *
  *
  * Return: rot
  *
  */
char *rot13(char *p)
{
	char *rotvalue1, rotvalue2;
	char *rot = p;
	int j = 0;
	rotvalue1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rotvalue2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*rot)
	{
		for (j = 0; rotvalue1[j]; j++)
		{
			if (*rot == rotvalue1[j])
			{
				*rot = rotvalue2[j];
				break;
			}
		}
		rot++;
	}
	return (p);
}
