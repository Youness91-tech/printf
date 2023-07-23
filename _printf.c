#include "main.h"

/**
 *_printf - It takes a string and prints different types of arguments for
 * an unspecified number of arguments
 * @format: the initial string that tells us what to print
 * Description: this function will call the get_print() function that will
 * Return: the amount of times we write to stdout
 */

int _printf(const char *format, ...)
{

	int (*pfunc)(va_list);

	va_list list;

	int i, count;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	i = count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			pfunc = get_func(format[i + 1]);
			if (pfunc == NULL)
				count += print_nan(format[i], format[i + 1]);
			else
				count += pfunc(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
