#include <stdio.h>

/**
 * main - main function
 *
 * Return:0
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
