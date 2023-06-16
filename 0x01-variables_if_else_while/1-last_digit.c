#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Determine if num is even or odd
 *
 *Description: This program generates a random num and if its even or odd.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 2 == 0)
		printf("%d is even\n", n);
	else
		printf("%d is odd\n", n);

	return (0);
}
