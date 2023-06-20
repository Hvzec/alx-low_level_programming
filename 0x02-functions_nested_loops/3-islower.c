#include "main.h"

/**
 * _islower - check for lowercase characters
 * @c: checked character
 * Description: iheck if the character is lowercase.
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
