#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Its prints the last digit of a num.
 * @n: The num 'number' to form the last digit from.
 * Return: The value of n.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == 0)
		last_digit = 0;
	else if (n == INT_MIN)
		last_digit = 8; /* last digit is 8 */
	else
		last_digit = (n < 0) ? -n % 10 : n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
