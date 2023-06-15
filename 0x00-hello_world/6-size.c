#include <stdio.h>

/**
 *main - the size of various types on the computer it is compiled
 *Return: always 0 (Success)
*/
int main(void)
{
	printf("Size of char: %lld byte(s)\n", sizeof(char));
	printf("Size of int: %lld byte(s)\n", sizeof(int));
	printf("Size of long int: %lld byte(s)\n", sizeof(long int));
	printf("Size of long long: %lld byte(s)\n", sizeof(long long));
	printf("Size of float: %lld byte(s)\n", sizeof(float));
	return (0);
}
