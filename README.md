<p align="center">
<img src="holberton_logo.png"
height="300" width="350"/>
</p>

_printf is a project that recreates the functionality of printf for specific flags and specifiers of the printf function. It prints input to the standard output.

## Requirements
```
Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
```

## Authorized Functions & Macros:
```
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
```

## Compilation:

```
gcc -Wall -Werror -Wextra -pedantic *.c
```

## Sample Test File:
```


#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%z]\n");
    return (0);

```


## Expected Results:
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%z]

```


## Format Specifiers:


| Type:  | Second Header               |
| ------ | -------------               |
| s      | String                      |
| c      | Char                        |
| d      | Digit                       |
| i      | Integer                     |
| u      | Unsigned Decimal            |
| b      | Binary                      |
| o      | Octal                       |
| x      | Lowercase hexidecimal       |
| X      | Uppercase Hexidecimal       |
| S      | Print String with 0x        |
| r      | Content Cell                |
| R      | ROT - 3 a String            |
| %      | Prints a % as printf        |


## Functions to Handle Format Specifiers

select_b.c - Handles unsigned int (binary)


```

int bhelper(unsigned int i)
{
	int count = 0;

	if (i == 0)
		return (0);
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

int select_b(va_list args)
{
	int count = 0;
	unsigned int i = va_arg(args, unsigned int);

	count = bhelper(i);
	return (count);
}

```

select_c.c - Handles characters

```
int select_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
```

select_i.c - Handles integers

```
int ihelper(int i)
{
	int count = 0;
	int binary = 0;

	if (i == -2147483648)
	{
		binary = 1;
		i = i / 10;
	}
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
		count = count + ihelper(i / 10);
	_putchar((i % 10) + '0');
	count++;
	if (binary == 1)
		_putchar('8');
	return (count);
}

int select_i(va_list args)
{
	int count = 0;
	int i = va_arg(args, int);

	count = ihelper(i);
	return (count);
}
```

select_s.c - Handles array or characters (strings)

```
int select_s(va_list args)
{
	int itr = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(null)";
	while (string[itr])
	{
		_putchar(string[itr]);
		itr++;
	}
	return (itr);
}
```

## Authors:
[@Corbin Vandeventer - Github](https://github.com/forstupidityonly) - [@Lonzo Rust - Github](https://github.com/lonzor)
