#include "main.h"

/**
 * pf_Binary - prints a binary number.
 * @binary: arguments
 * Return: 1.
*/

int pf_Binary(va_list binary)
{
	unsigned int n = va_arg(binary, unsigned int);
	int i, count = 0;
	unsigned int tmp;
	int *arr;

	if (n == 0)
	{
		_putchr('0');
		return 1;
	}

	tmp = n;

	while (tmp != 0)
	{
		count++;
		tmp >>= 1;
	}

	arr = malloc(count * sizeof(int));
	if (arr == NULL)
		return 0;

	tmp = n;

	for (i = count - 1; i >= 0; i--)
	{
		arr[i] = tmp & 1;
		tmp >>= 1;
	}

	for (i = 0; i < count; i++)
		_putchr(arr[i] + '0');

	free(arr);
	return (count);
}
