#include <stdio.h>

/**
 * This is a simple c program to print
 * the size of the data types
 *
 */

int main(int argc, char* argv[]) {

	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));

	return (0);

}
