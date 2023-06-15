#include <stdio.h>

/**
 *main - the size of various types on the computer it is compiled
 *Return: always 0 (Success)
*/
int main(void)
{
	printf("Size of a char: %lld byte(s)\n", sizeof(char));
	printf("Size of an int: %lld byte(s)\n", sizeof(int));
	printf("Size of a long int: %lld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lld byte(s)\n", sizeof(float));
	return (0);
}
