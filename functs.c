#include "main.h"

/**
 * print_char - Prints a character
 * @list: List of arguments
 *
 * Return: 1
 */
int print_char(va_list list)
{
	int retVal;
	char ch = va_arg(list, int);

	retVal = write(STDOUT_FILENO, &ch, 1);
	return (retVal);
}

/**
 * print_str - Prints a string
 * @list: List of arguments
 *
 * Return: Number of characters printed
 */
int print_str(va_list list)
{
	char *str = NULL;
	int count = 0, retVal;

	str = va_arg(list, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str != '\0')
	{
		retVal = write(STDOUT_FILENO, str, 1);
		if (retVal == -1)
			return (-1);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_reverse - Prints a string in reverse
 * @list: Argument list containing the string to be printed
 *
 * Return: The length of the string
 */
int print_reverse(va_list list)
{
	char *str = va_arg(list, char *);
	int len = 0, i, retVal;

	if (!str)
		str = "(null)";

	while (str[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		retVal = write(1, &str[i], 1);
		if (retVal == -1)
			return (-1);
	}

	return (len);
}
