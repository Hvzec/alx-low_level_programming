#include <stdio.h>

/**
 *main - the size of various types on the computer it is compiled
 *Return: always 0 (Success)
*/
int main(void)
{
	printf("Size of char: %Lu byte(s)\n", sizeof(char));
	printf("Size of int: %Lu byte(s)\n", sizeof(int));
	printf("Size of float: %Lu byte(s)\n", sizeof(float));
	printf("Size of double: %Lu byte(s)\n", sizeof(double));
	printf("Size of long: %Lu byte(s)\n", sizeof(long));
	printf("Size of long long: %Lu byte(s)\n", sizeof(long long));
	return (0);
}
