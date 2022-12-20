/**
 * _strlen(char *s)- check the co
 * @s: char pointer
 * return: int len 
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
	return i;
}
