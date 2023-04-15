#include <stdio.h>

/**
  *main - prints name of program
  *@argc: argument counts
  *@argv: pointer to array of strings
  *Return: 0 on sucess
  */

int main(int argc, char *argv[])
{
	if (argc > 0)

		printf("%s\n", argv[0]);
	return (0);
}
