#include "holberton.h"
/**
  *
  */
int (*get_func(char specifier))(va_list)
{
	int itr = 0;
	function_select opt[] = {
		{'c', select_c},
		{'s', select_s},
		{'\0', NULL}
	};

	while(opt[itr].specifier)
	{
		if(opt[itr].specifier == specifier)
			return (opt[itr].function);
		itr++;
	}
	return (NULL);
}