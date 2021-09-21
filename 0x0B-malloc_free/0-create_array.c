#include <stdlib.h>

/**
 * create_array - create array
 * Description: creates array and fill it with char
 * @size: size of the array
 * @c: char to fill the array
 *
 * Return: *myArray, NULL
 */
char *create_array(unsigned int size, char c)
{
	char *myArray;
	int i;

	if (size == 0)
		return (NULL);

	myArray = malloc(sizeof(char) * size);
	
	if (myArray != NULL)
	{
		for (i = 0; i < (int) size; i++)
			myArray[i] = c;
		return (myArray);
	} else
	{
		return (NULL);
	}

}
