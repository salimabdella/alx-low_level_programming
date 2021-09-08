#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - string concat
 * Description: concatenates two strings starting from n
 * @*dest: destination char array
 * @*src: source char array
 * @n: starting index
 *
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return dest;
}
