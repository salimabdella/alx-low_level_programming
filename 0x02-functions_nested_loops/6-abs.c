#include "main.h"

/**
 * _abs - absoulate value
 * @n: int to convert
 * Return: +ve n
 */


int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}

