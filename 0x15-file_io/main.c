#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main -chec
*
* @argc: args #
* @argv: args arr
*
*/

int main(int argc, char **argv)
{
	int res;
	char *content = "Best School !";

	if (argc < 2)
	{
		printf("use: %s filename [content]\n", argv[0]);
		return (1);
	}
	res = append_text_to_file(argv[1], argv[2] ? argv[2] : content);
	printf("res: %i", res);
	return (0);
}
