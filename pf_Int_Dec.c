#include "main.h"

/**
 * pf_Int_Dec - prints integer %i || decimal %d.
 * @args: argument to be printed.
 * Return: number of characters.
*/

int pf_Int_Dec(va_list args)
{
	int n = va_arg(args, int);
	int i = 0;
	int digit;

	if (n < 0)
	{
		_putchr('-');
		n = -n;
		i++;
	}

	if (n == 0)
	{
		_putchr('0');
		i++;
	}
    	else
	{
		int exp = 1;
		int temp = n;

		while (temp > 0)
		{
			temp /= 10;
			exp *= 10;
        	}

		while (exp > 1)
		{
			exp /= 10;
			digit = (n / exp) % 10;
			_putchr(digit + '0');
			i++;
		}
	}

	return i;
}