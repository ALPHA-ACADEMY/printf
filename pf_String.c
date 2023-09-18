#include "main.h"

/**
 * pf_String - print a string.
 * @strings: argument passed by a function.
 * Return: the length of the string.
*/

int pf_String(va_list strings)
{
	char *s = va_arg(strings, char *);
	int l = 0;

	if (s == NULL)
		s = "(null)";

	for (; s[l] != '\0'; l++)
		_putchr(s[l]);

	return (l);

}
