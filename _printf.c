#include "main.h"

/**
 * identifier - identifies the _printf specifier
 * @a: specifier
 * @arg: argument
 * Return: symbol to be used
 */
int identifier(char a, va_list arg)
{
	unsigned int c;


	spec id[] = {
			{"c", print_char},
			{"s", print_str},
			{NULL, NULL}
	};

	for (c = 0; id[c].sym != NULL; c++)
	{
		if (id[c].sym == a)
		{
			return (id[c].p(arg));
		}
		return (0);
	}
}






/**
 * _printf - mimics the printf function
 * @format: character string
 * Return: output according to the format
 */
int _printf(const char *format, ...);
{
	unsigned int i;
	va_list arg;
	int idprinted = 0, charprinted = 0;

	va_start(arg, format);
	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			_putchar(format[i]);
			charprinted++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			charprinted++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
		{
			return (-1);
		}
		idprinted = identifier(format[i + 1], arg);
		if (identifier == -1 || identifier != 0)
		{
			i++;
		}
		if (identifier > 0)
		{
			charprinted = identifier;
		}
		if (identifier == 0)
		{
			_putchar('%');
			charprinted++;
		}
	}
	va_end(arg);
	return (charprinted);
}
