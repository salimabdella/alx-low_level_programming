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

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i=0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}
	return (0);
}
