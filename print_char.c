#include "holberton.h"
/**
  *
  */
int select_c(va_list args)
{
	char c = va_arg(args, int);
	_putchar(c);
	return (1);
}
