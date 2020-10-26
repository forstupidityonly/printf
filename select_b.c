#include "holberton.h"
/**
  * bhelper - do math for caller
  * @i: the int to make bi
  * Return: count
  */
int bhelper(unsigned int i)
{
	int count = 0;

	if (i == 0)
		return(0);
	count += bhelper(i / 2);
	if (i % 2 == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		_putchar('1');
		count++;
	}
	return (count);
}
/**
  * https://www.electronics-tutorials.ws/binary/bin_2.html
  * https://www.youtube.com/watch?v=rsxT4FfRBaM
  * select_b - print int in bianary
  * @args: args
  * Return: count
  */
int select_b(va_list args)
{
	int count = 0;
	unsigned int i = va_arg(args, unsigned int);

	count = bhelper(i);
	return (count);
}

