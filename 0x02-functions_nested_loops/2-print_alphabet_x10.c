#include "main.h"

/**
* print_alphabet_x10 - print chars
* Description: prints lowercase chars x10.
*/
void print_alphabet_x10(void)
{
	int i;
	int j = 0;
	
	while (j <= 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar((char)i);
		}
		_putchar('\n');
		j++;
	}
}
