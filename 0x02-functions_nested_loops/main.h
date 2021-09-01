
#include <unistd.h>

/**
 * _putchar: print single char
 * Return:
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
