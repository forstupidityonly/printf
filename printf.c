#include "holberton.h"

/**
 * _printf - prints out according to format string
 * *format is a character string. The format string is composed of zero or more directives.
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int i, counter = 0;
	va_list ap;

	va_start(ap, format);

	while (format)

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				counter++;
				i++;
			}
			else if (format[i + 1] != '%' && format[i] == '%')

			switch (format[++i])
			{	
			case '%':
				break;
			case 's':
				break;
			case 'c':
				break;
			default:
				if (!format[i])
					return (-1);
		/* counter += _putchar(of something maybe % ) */
		}
		
	}
	va_end(ap);
	return (counter);
}
