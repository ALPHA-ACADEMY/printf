#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format - match the format specifiers.
 * @id: char pointer pointed to --> d, i, s, o, x,...
 * @f: pointer to function.
*/

typedef struct format
{
	char *id;
	int (*f)();
} format_specifiers;

int _putchr(char c);
int pf_String(va_list strings);
int pf_Character(va_list characters);
int pf_Percentage(void);
int _printf(const char *format, ...);
int pf_Int_Dec(va_list args);

#endif
