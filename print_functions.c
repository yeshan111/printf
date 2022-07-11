#include "main.h"
/**
 * print_char - prints a character c to stdout
 * @arg: argument
 * Return: 1 on success
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_str - print a string to stdout identifed by "s"
 * @arg: argument
 * Return: string, 1 onm success
 */
int print_str(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);

	if (str == NULL)
	{
		str = "(null)";
	}
	else if (*str == '\0')
	{
		return (-1);
	}
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}


