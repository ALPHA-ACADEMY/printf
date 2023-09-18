#include "main.h"

/**
 * pf_Int_Dec - prints integer %i || decimal %d.
 * @args: argument to be printed.
 * Return: number of characters.
*/

int pf_Int_Dec(va_list args)
{
	int n = va_arg(args, int);
	int num;
	int i = 0;
	int digit;
	int exp = 1;

	if (n < 0)
	{
		_putchr('-');
		num = -num;
		i++;
	}

	num = n;

	while (num / 10 > 0)
	{
		exp *= 10;
		num /= 10;
	}

	num = n;
	while (exp > 0)
	{
		digit = num / exp;
		_putchr(digit + '0');
		num -= digit * exp;
		exp /= 10;
		i++;
	}


	return (i);
}
