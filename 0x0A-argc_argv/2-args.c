#include <stdio.h>

/**
 * main - main
 * @argc: command line args count
 * @argv: array of command line args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i=0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
