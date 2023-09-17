#include "main.h"

/**
 * _putchr - print just 1byte of character.
 * @character: the character to print.
 *
 * Return: On success 1.
*/

int _putchr(char character)
{
	return (write(1, &character, 1));
}
