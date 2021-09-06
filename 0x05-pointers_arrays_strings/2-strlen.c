/**
 * _strlen - char length
 * Description: count the char of string
 * @s: chars
 *
 * Return: int
 */
int _strlen(char *s)
{
	const char *str;

	for (str = s; *str; ++str);

	return (str - s);
}
