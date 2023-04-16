#include <stdio.h>

/**
  *main - multiplies two numbers
  *@argc: argument count
  *@argv: pointer to array to be multiplied
  *Return: 0 on success
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
