#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int f1(int);
int f2(const char*, int);
int f3(const char*, int);
int f4(const char*, int);
int f5(const char*, int);
int f6(void);


/**
 * main - crackme5 keygen generator
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, -1 on error
 */
int main(int argc, char** argv[])
{
	if (argc != 3)
	{
		printf("%s <key> <username>\n", argv[0]);
		return (-1);
	}

	const char* weird_str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	const char * key = (char*)argv[1];
	const char * username = (char*)argv[2];

	const int key_len = strlen(key);
	char key_user[7];

	// check username char
	if (strlen(username) != 6)
	{
		printf("[-] username length must be 6");
		return (-1);
	}

	// computer the first function
	key_user[0] = weird_str[f1(key_len)];
	key_user[1] = weird_str[f2(key, key_len)];
	key_user[2] = weird_str[f3(key, key_len)];
	key_user[3] = weird_str[f4(key, key_len)];
	key_user[4] = weird_str[f5(key, key_len)];
	key_user[5] = weird_str[f6()];

	printf("--> key: %s\n--> username: %s\n", key, key_user);
	return (0);
}


/**
 * f1 - generate the 1st index for the key
 * @key_length - the key length
 *
 * Return: int
 */
int f1(int key_length)
{
	return (key_length ^ 0x3B) & 0x3F;
}

/**
 * f2 - generate the 2nd index for the key
 * @key - the key
 * @key_length - the key length
 *
 * Return: int
 */
int f2(const char* key, int key_length)
{
	int i;
	int counter = 0;
	for ( i = 0; i < key_length; ++i )
		counter += (int) key[i];
	return ((counter ^ 0x4F) & 0x3F);
}


/**
 * f3 - generate the 3rd index for the key
 * @key - the key
 * @key_length - the key length
 *
 * Return: int
 */
int f3(const char* key, int key_length)
{
	int i;
	char counter = 0;
	for ( i = 0; i < key_length; ++i )
		counter *= key[i];
	return ( ((int)counter ^ 0x55) & 0x3F);
}


/**
 * f5 - generate the 4th index for the key
 * @key - the key
 * @key_length - the key length
 *
 * Return: int
 */
int f4(const char* key, int key_length)
{
	int i;
	int counter = *key;
	for ( i = 0; i < key_length; ++i )
	{
		if ( key[i] > counter )
			counter = key[i];
	}
	srand(counter ^ 0xE);
	return (rand() & 0x3F);
}


/**
 * f5 - generate the 5th index for the key
 * @key - the key
 * @key_length - the key length
 *
 * Return: int
 */
int f5(const char* key, int key_length)
{
	int i;
	int counter = 0;
	for ( i = 0; i < key_length; ++i )
		counter += (key[i] * key[i]);
	return ((counter ^ 0xEF) & 0x3F);
}


/**
 * f6 - generate the 6th index for the key
 *
 * Return: int
 */
int f6(void)
{
	int i;
	int counter = 0;
	for ( i =0; i < 0x74; ++i )
		counter = rand();
	return ((counter ^ 0xE5) & 0x3F);
}
