#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int f1(int);
int f2(const char*, int);
int f3(const char*, int);
int f4(const char*, int);
int f5(const char*, int);
int f6(const char*);


/**
 * main - crackme5 keygen generator
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, -1 on error
 */
int main(int argc, char* argv[])
{
	char* weird_str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	const char * username;
	int username_length;
	char key_user[7];

	if (argc != 2)
	{
		printf("%s <username>\n", argv[0]);
		return (-1);
	}

	username = (char*)argv[1];
	username_length = strlen(username);

	/* check username char */
	if (strlen(username) != 6)
	{
		printf("[-] username length must be 6");
		return (-1);
	}

	key_user[0] = weird_str[f1(username_length)];
	key_user[1] = weird_str[f2(username, username_length)];
	key_user[2] = weird_str[f3(username, username_length)];
	key_user[3] = weird_str[f4(username, username_length)];
	key_user[4] = weird_str[f5(username, username_length)];
	key_user[5] = weird_str[f6(username)];

	printf("%s", key_user);
	return (0);
}


/**
 * f1 - generate the 1st index for the key
 * @username_length - the username length
 *
 * Return: int
 */
int f1(int username_length)
{
	return (username_length ^ 0x3B) & 0x3F;
}

/**
 * f2 - generate the 2nd index for the key
 * @username - username
 * @username_length - username length
 *
 * Return: int
 */
int f2(const char* username, int username_length)
{
	int i;
	int counter = 0;
	for ( i = 0; i < username_length; ++i )
		counter += (int) username[i];
	return ((counter ^ 0x4F) & 0x3F);
}


/**
 * f3 - generate the 3rd index for the key
 * @username - username
 * @username_length - username length
 *
 * Return: int
 */
int f3(const char* username, int username_length)
{
	int i;
	int counter = 1;
	for ( i = 0; i < username_length; ++i )
		counter *= username[i];
	return ( (counter ^ 0x55) & 0x3F);
}


/**
 * f5 - generate the 4th index for the key
 * @username - the key
 * @username_length - the username length
 *
 * Return: int
 */
int f4(const char* username, int username_length)
{
	int i;
	int counter = *username;
	for ( i = 0; i < username_length; ++i )
	{
		if ( username[i] > counter )
			counter = username[i];
	}
	srand(counter ^ 0xE);
	return (rand() & 0x3F);
}


/**
 * f5 - generate the 5th index for the key
 * @username - username
 * @username_length - the username length
 *
 * Return: int
 */
int f5(const char* username, int username_length)
{
	int i;
	int counter = 0;
	for ( i = 0; i < username_length; ++i )
		counter += ((int) username[i] * (int) username[i]);
	return ((counter ^ 0xEF) & 0x3F);
}


/**
 * f6 - generate the 6th index for the key
 * @username - username
 *
 * Return: int
 */
int f6(const char* username)
{
	int i;
	int counter = 0;
	for ( i =0; i < username[0]; ++i )
		counter = rand();
	return ((counter ^ 0xE5) & 0x3F);
}
