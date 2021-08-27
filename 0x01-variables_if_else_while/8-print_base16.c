#include <stdio.h>

/**
 * main - main function
 *
 * Return:0
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 64)
	{
		if (i < 58)
		{
			putchar(i);
		}
		else
		{
			putchar(i+39);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

