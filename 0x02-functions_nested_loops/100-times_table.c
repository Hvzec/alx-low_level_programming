#include "main.h"
#include <stdio.h>

/**
 * print_times_table - It's printing the n times Table.
 * @n: Tthis is the num of times.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
				printf(", ");
			printf("%d", result);
		}
		printf("\n");
	}
}