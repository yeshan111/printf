#include "main.h"
/**
*a
* print_hex - function to print in hexadecimal
* @n: int to print
* @c: case of printing (0 = lower, 1 = upper)
* Return: size of output
*/

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int len, powten, j, digit, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		len = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';
		while (num != 0)
		{
			num /= 16;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 16;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * powten;
			powten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

/**
* print_x - prints in lowercase hexadecimal
* @x: int to print
* Return: size of the output
*/

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
* print_X - prints in uppercase hexadecimal
* @X: int to print
* Return: size of the output
*/

int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
