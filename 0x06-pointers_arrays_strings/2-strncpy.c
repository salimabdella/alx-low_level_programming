#include "main.h"
/**
 * _strncpy - string copy
 * Description: copy string to dest starting from n
 * @*dest: destination char array
 * @*src: source char array
 * @n: starting index
 *
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}
