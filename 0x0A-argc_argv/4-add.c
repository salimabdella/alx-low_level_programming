#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: command line args count
 * @argv: array of command line args
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int total = 0;
	int error = 0;

        if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
				total += atoi(argv[i]);
			else
			{
				error = 1;
				break;
			}
		}
		
		if (error)
		{
			printf("Error\n");
			return (1);
		}
		else
			printf("%d\n", total);
	}
        return (0);
}
