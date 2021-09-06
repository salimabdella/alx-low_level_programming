/**
 * swap_int - swap numbers
 * Description: swaps given two numbers
 * @a: first number to swap
 * @b: second number to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b) 
{
	const int oldAVal = *a;
	*a = *b;
	*b = oldAVal;
}

