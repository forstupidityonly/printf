#include "holberton.h"
/**
  * select_s - print string
  * @args: stores list of chars
  * Return: num of char printed
  */
int select_s(va_list args)
{
	int i, itr = 0;
	char *str = va_args(args, char *);

	if (string == NULL)
		string = "(null)";

	while (string[itr])
	{
		_putchar(string[itr]);
		itr++;
	}

	return (itr);
}
