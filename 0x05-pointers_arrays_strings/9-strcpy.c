#include "main.h"

/**
 * _strcpy - copies string
 * Description: copy string from one var to another
 * @src: source
 * @dest: destination
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
