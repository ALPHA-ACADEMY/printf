#include "main.h"

/**
 * pf_Character - prints a character.
 * @characters: arguments passed by a function.
 * Return: 1 On Success.
*/

int pf_Character(va_list characters)
{
	char c;

	c = va_arg(characters, int);
	_putchr(c);
	return (1);
}
