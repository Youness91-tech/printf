#include "main.h"

/**
 * print_hex - Prints an unsigned int in hexadecimal lower format.
 * @list: List of arguments.
 *
 * Return: Number of hexadecimal digits printed.
 **/
int print_hex(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	char ch;
	int count = 0, i = 0, j = 0, low_hex[32];

	if (n == 0)
	{
		ch = n + '0';
		write(1, &ch, 1);
		return (1);
	}
	else
	{
		while (n > 0)
		{
			low_hex[i] = n % 16;
			n = n / 16;
			count++;
			i++;
		}

		for (j = i - 1; j >= 0; j--)
		{
			if (low_hex[j] > 9)
				ch = 'a' + (low_hex[j] % 10);
			else
				ch = low_hex[j] + '0';
			write(1, &ch, 1);
		}
		return (count);
	}
}

/**
 * print_HEX - Prints an unsigned int in hexadecimal upper format.
 * @list: List of arguments.
 *
 * Return: Number of hexadecimal digits printed.
 **/
int print_HEX(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	char ch;
	int count = 0, i = 0, j = 0, up_hex[32];

	if (n == 0)
	{
		ch = n + '0';
		write(1, &ch, 1);
		return (1);
	}
	else
	{
		while (n > 0)
		{
			up_hex[i] = n % 16;
			n = n / 16;
			count++;
			i++;
		}

		for (j = i - 1; j >= 0; j--)
		{
			if (up_hex[j] > 9)
				ch = 'A' + (up_hex[j] % 10);
			else
				ch = up_hex[j] + '0';
			write(1, &ch, 1);
		}
		return (count);
	}
}
