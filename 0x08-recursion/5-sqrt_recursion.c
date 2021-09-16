#include "main.h"
/**
 * check - sqrt checker
 * @g: g
 * @c: find
 * Return: int
 */
int check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - sqrt number
 * @n: num
 * Return: void
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
