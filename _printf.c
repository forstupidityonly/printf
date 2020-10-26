#include "holberton.h"
/**
  *
  */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*function)(va_list);

	va_start(args, format);
	while (*format)
	{
		/**
		  * print until % is found
		  */
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		/**
		  * if %% then print %
		  */
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count++;
		}
		/**
		  * found char after % check if its null bite
		  * its not so found format specifier after %
		  * find correct formatting function
		  * call function to print and track count
		  */
		else if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			/**
			  * function should be a function ptr
			  * get_func - takes in format specifier and returns ptr to correct func
			  * functions should take va_list(args) 
			  * and return count of printed values
			  */
			function = get_func(*format);
			if (*(format) == '\0')
				return (-1);
			else if (function == NULL)
			{
				_putchar(*(format - 1));
				_putchar(*format);
				count += 2;
			}
			else
				count += function(args);
		}
		format++;
	}
	va_end(args);
	return (count);
}
