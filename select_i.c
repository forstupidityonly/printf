#include "holberton.h"
/**
  * https://www.geeksforgeeks.org/print-long-int-number-c-using-putchar/
  * helper - strip numbers recursivly
  * @i: the num
  * Return: count
  */
int helper(int i)
{
	int count = 0;

	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
		count = count + helper(i / 10);
	_putchar((i % 10) + '0');
	count++;
	return (count);
}
/**
  * select_i - print num
  * @args: the args
  * Return: count
  */
int select_i(va_list args)
{
	int count = 0;
	int i = va_arg(args, int);

	count = helper(i);
	return (count);
}
