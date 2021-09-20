#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: command line args count
 * @argv: array of command line args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc-1 != 2)
		printf("Error\n");
	else {
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
        return (0);
}
