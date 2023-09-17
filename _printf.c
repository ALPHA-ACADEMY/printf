#include "main.h"

/**
 * _printf - function that produces output according to a format.
 *
 * @format: format specifier
 * Return: the number of characters printed excluding null byte
*/

int _printf(const char * const format, ...)
{
	format_specifiers m[] = {
		{"%s", pf_String},
		{"%c", pf_Character},
		{"%%", pf_Percentage},
		{"%d", pf_Decimal}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		int found_match = 0;

		for (j = 0; j < 4; j++)
		{
			if(m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i += 2;
				found_match = 1;
				break;
			}
		}

		if (!found_match)
		{
			_putchr(format[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}
