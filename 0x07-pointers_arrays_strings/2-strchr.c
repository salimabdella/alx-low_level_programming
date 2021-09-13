#include <stdio.h>
/**
 * _strchr - finds char
 * @s: check string
 * @c: char to find
 * Return: pointer, NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
