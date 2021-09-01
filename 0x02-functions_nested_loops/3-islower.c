#include "main.h"

/**
* _islower - check lowercase
* @c - ascii char
* Description: checks char if lowercase.
* Return: 1, 0
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
