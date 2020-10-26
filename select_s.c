#include "holberton.h"
/**
  * select_s - print string
  * @args: stores list of chars
  * Return: num of char printed
  */
int select_s(va_list args)
{
	int i, itr = 0;
	char *str;
	
	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		itr += _putchar(str[i]);

	return (itr);
}
