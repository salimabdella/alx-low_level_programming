#include "main.h"
/**
 * _strcat - string concat
 * Description: concatenates two strings
 * @*dest: destination char array
 * @*src: source char array
 *
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	const char *destIndexCopy = dest;

	for (; *dest; ++dest)
		;
	for (; *src; ++src)
	{
		*(dest++) = *src;
	}

	return (char *) destIndexCopy;
}
