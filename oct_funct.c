#include "main.h"

/**
 * print_oct - Prints an unsigned int in octal format.
 * @list: List of arguments.
 *
 * Return: Number of binary digits printed.
 */
int print_oct(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	char ch;
	int count = 0, i = 0, j = 0, octal[32];

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
			octal[i] = n % 8;
			n = n / 8;
			count++;
			i++;
		}

		for (j = i - 1; j >= 0; j--)
		{
			ch = octal[j] + '0';
			write(1, &ch, 1);
		}
		return (count);
	}
}
