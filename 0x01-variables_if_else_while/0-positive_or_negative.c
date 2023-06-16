#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Positive anything is better than negative nothing
 *
 *Description: This program assigns a random number to the variable n and prints whether the number is positive, negative, or zero.
 *Return: 0 (Success)
*/

int main(void)
{
	int n;

	/* Generate a random number */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Print the num and its sign */
	printf("The number %d is ", n);

	if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");

	return (0);
}
