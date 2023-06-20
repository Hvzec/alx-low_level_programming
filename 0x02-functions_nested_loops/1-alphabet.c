#include "main.h"

/**
 * p:wq
 * print_alphabet - Prints the alphabet
 * Description: Prints the alphabet in lowercase starting from 'a' and ending with 'z'
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
