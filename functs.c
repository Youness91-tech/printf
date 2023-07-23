#include "main.h"

/**
 *print_ch - prints a character to stdout
 *
 *@list:list to increment
 *@handler:handler struct
 *Return:1 since printed only one character
 */
int print_ch(va_list list, han_s *handler)
{
	char ch;
	char pad = ' ';
	unsigned int pad_count = 1;
	unsigned int count;

	ch = va_arg(list, char);
	if (handler->minus)
	{
		count += _putchar(ch);
	}
	for (; pad_count++ < handler->width; )
		count += _putchar(pad);
	if (!handler->minus)
		count += _putchar(ch);
	return (count);
}
/**
 *print_str - prints a string to stdout,1 char at a time
 *
 *@list:list to increment
 *
 *Return:no of char printed
 */
int print_str(va_list list)
{
	char *str;
	int i;
	char ch;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		ch = str[i];
		write(1, &c, 1);
	}
	return (i);
}
/**
 * print_prct - writes chars after a % if they
 * don't match anything in the struct
 * @c1: the first char passed (always %)
 * @c2: the char after the %
 * Return: 1 if c2 is a % and 2 is c2 is anything else
 */

int print_prct(char c1, char c2)
{
	if (c2 == '%')
	{
		write(1, &c2, 1);
		return (1);
	}
	else
	{
		write(1, &c1, 1);
		write(1, &c2, 1);
		return (2);
	}
}

/**
 *print_int - prints an integer of format 'd'
 *@list:list to increment
 *Return:count of characters printed
 */
int print_int(va_list list)
{
	long intg;
	unsigned int n;
	int count = 0;
	int x = 1;

	if (handler->l_mod)
	{
		intg = va_arg(list, long);
	}
	else if (handler->h_mod)
	{
		intg = (short int)va_arg(list, int);
	}
	if (intg < 0)
	{
		n = -intg;
		_putchar('-');
		count++;
	}
	if (handler->plus && intg > 0)
	{
		_putchar('+');
	}
	else
	{
		n = intg;
	}
	while ((n / x) > 9)
	{
		x *= 10;
	}
	while (x >= 1)
	{
		_putchar(((n / x) % 10) + '0');
		x /= 10;
		count++;
	}
	return (count);
}
/**
 *print_unsigned - prints unsigned no.
 *@list:list to increment
 *Return:count of no. printed
 */
int print_unsigned(va_list list)
{
	unsigned int intg;
	int len = 0;
	int d = 1;

	intg = va_arg(list, unsigned int);
	for (; intg / d > 9; )
	{
		d = d * 10;
	}
	while (d > 0)
	{
		len += _putchar('0' + (intg / d));
		intg = intg % d;
		d = d / 10;
	}
	return (len);
}
