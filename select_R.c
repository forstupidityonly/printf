#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 * Return: String encode
 */
int rot13(va_list args)
{
	char *str = va_arg(args, char*);
	char *str2 = NULL;
	int i, j;
	char *norot, *rot13;

	str2 = malloc(sizeof(char * strlen_handler
	norot = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; nonrot[j] != '\0'; j++)
		{
			if (s[i] == nonrot[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}
		if (!notrot[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
  * print_rotted - Prints a string that has been rot13'ed.
  *
  *
  *
  **/

int print_rotted(va_list args)
{
	char *p
	int p_len;

	p = va_arg(list, char *);
	p_len = rot13((p != NULL) ? p : "(ahyy)");

	return(p_len)
}
