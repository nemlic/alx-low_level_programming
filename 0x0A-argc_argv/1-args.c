#include <stdio.h>

/**
 * main - prints number of arguments passed 
 * @argc: argument count
 * @argv: array pointer to a string
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc-1);

	return (0);

}
