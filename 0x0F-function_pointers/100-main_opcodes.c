#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints own opcodes
  *@argc: argument count
  *@argv: array of arguments
  *Return: 0 on success
  */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
		printf("%02hhx\n", arr[i]);
		continue;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
