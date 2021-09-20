#include <stdio.h>

/**
 * main - main
 * @argc: command line args count
 * @argv: array of command line args
 *
 * Return: Always 0.
 */
int main(int argc, char * argv[])
{
	printf("%s\n", argv[argc-1]);
	return (0);
}
