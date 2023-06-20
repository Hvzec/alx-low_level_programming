#include "main.h"

/**
 * _isalpha - checks alphabetic character.
 * @c: character checked
 * Description: check for alphabetic character.
 * Return: 1 if the character is a letter 'lowercase or uppercase', 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >='A' && c <='Z'))
		return (1);
	else
		return (0);
}
