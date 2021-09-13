/**
 * _memcpy - copys n bytes to memory
 * @dest: pointer
 * @src: source
 * @n: num bytes
 * Return: start
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (start);
}
