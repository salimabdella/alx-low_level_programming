#include "main.h"

/**
 * print_alphabet
 * description: prints the lowercase alphabets with _putchar
 * Return: void
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
