#include "main.h"

/**
* print_alphabet - print chars
* Description: prints lowercase chars.
*/
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar((char)i);
	}
	_putchar('\n');
}
