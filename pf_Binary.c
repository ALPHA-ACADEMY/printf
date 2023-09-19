#include "main.h"

/**
 * pf_Binary - prints a binary number.
 * @binary: arguments
 * Return: 1.
*/

int pf_Binary(va_list binary)
{
	unsigned int n;
	int binaryArr[32];
	int i = 0, j;

	n = va_arg(binary, unsigned int);

	while (n > 0)
	{
		binaryArr[i] = n % 2;
		n /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchr(binaryArr[j] + '0');
	}

	return (i);
}
