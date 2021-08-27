#include <stdlib.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int i;
	int last_number = 99;
        for (i=0; i < last_number+1; i++) {
		putchar((i/10) + '0');
		putchar((i%10) + '0');
		/* separetor, comma and space */
		if (i < last_number) {
			putchar(',');
			putchar(' ');
		}
	}
        return (0);
}
