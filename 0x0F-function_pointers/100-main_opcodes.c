#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its opcodes
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, v;
	char *u;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	u = (char *)main;

	for (v = 0; v < bytes; v++)
	{
		if (v == bytes - 1)
		{
			printf("%02hhx\n", u[v]);
			break;
		}
		printf("%02hhx ", u[v]);
	}
	return (0);
}
