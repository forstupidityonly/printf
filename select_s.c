#include "holberton.h"
/**
  * select_s - print string
  * @args: args
  * Return: num of char printed
  */
int select_s(va_list args)
{
	int itr = 0;
	char *string = va_arg(args, char *);

<<<<<<< HEAD
	if (!string)
=======
	if (string == NULL)
>>>>>>> Corbin
		string = "(null)";
	while (string[itr])
	{
		_putchar(string[itr]);
		itr++;
	}
	return (itr);
}
