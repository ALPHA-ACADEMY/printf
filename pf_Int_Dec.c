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
	int i = 1;
	int digit;
	int exp = 1;
	int last_digit = n % 10;

	n /= 10;
	num = n;

	if (last_digit < 0)
	{
		_putchr('-');
		num = -num;
		n = -n;
		last_digit = -last_digit;
		i++;
	}

	if (num > 0)
	{

		while (num / 10 != 0)
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
	}
	_putchr(last_digit + '0');


	return (i);
}
