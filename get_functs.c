#include "main.h"

/**
 * get_funct - selects the appropriate function to perform
 * conversion based on the format specifier
 *
 * @list: arguments list
 * @k: character before format specifier
 * @c: format specifier character
 *
 * Return: number of characters printed
 */
int get_funct(va_list list, char k, char c)
{
	int count = 0;

	if (c == 'c')
		count += print_char(list);
	else if (c == 's')
		count += print_str(list);
	else if (c == 'd' || c == 'i')
		count += print_num(list);
	else if (c == '%')
	{
		write(1, "%", 1);
		count++;
	} else if (c == 'b')
		count += print_bin(list);
	else if (c == 'o')
		count += print_oct(list);
	else if (c == 'x')
		count += print_hex(list);
	else if (c == 'X')
		count += print_HEX(list);
	else if (c == 'u')
		count += print_un(list);
	else if (c == 'r')
		count += print_reverse(list);
	else if (c == 'R')
		count += print_rot13(list);
	else if (c == 'S')
		count += print_S(list);
	else if (c == 'p')
		count += print_p(list);
	else
	{
		write(1, &k, 1);
		write(1, &c, 1);
		count += 2;
	}
	return (count);
}
