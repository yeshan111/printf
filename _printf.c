#include "main.h"

/**
 * identifier - identifies the _printf specifier
 * @a: specifier
 * @arg: argument
 * Return: symbol to be used
 */
int (*identifier(const char *format))(va_list)
{
	unsigned int c = 0;


	spec id[] = {
			{"c", print_char},
			{"s", print_str},
			{NULL, NULL}
	};

	while (id[c].sym)
	{
		if (id[c].sym[0] == (*format))
			return (id[c].p(arg));
		i++;
		return (NULL);
	}
}


/**
 * _printf - mimics the printf function
 * @format: character string
 * Return: output according to the format
 */
int _printf(const char *format, ...)
{
	int (*p)(va_list);
	va_list arg;
	int i = 0, charprinted = 0;

	va_start(arg, format);
	while(format[i])
	{
		while(format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			charprinted++;
			i++;
		}

		if(format[i] != '\0')
			return(charprinted);
		p = identifier(&format[i + 1]);
		if (p != NULL)
		{
			charprinted += p(arg);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		charprinted++;
		if (format[i + 1] == '%')
			i =+ 2;
		else
			i++;
	}
	va_end(arg);
	return (charprinted);
}
