
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: number of args
 * @argv: args
 * Return: 0, 1
 */

int main(int argc, char **argv)
{
	int total;
	int change;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	for (total = 0; change > 0; total++)
	{
		if (change - 25 >= 0)
			change = change - 25;
		else if (change - 10 >= 0)
			change = change - 10;
		else if (change - 5 >= 0)
			change = change - 5;
		else if (change - 2 >= 0)
			change = change - 2;
		else if (change - 1 >= 0)
			change = change - 1;
	}
	printf("%d\n", total);
	return (0);
}
