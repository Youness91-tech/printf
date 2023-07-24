#include "main.h"

/**
 * hexadml - Prints a char in hexadecimal upper format.
 * @n: The argument char.
 *
 * Return: Number of hexadecimal digits printed.
 */
int hexadml(char n)
{
	char ch;
	int count = 0, i = 0, j, up_hex[2];

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

/**
 * print_S - Prints a string, replacing non-printable characters with
 * hexadecimal representations
 * @list: A va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int print_S(va_list list)
{
	char *str = va_arg(list, char *);
	int count = 0, i = 0, cas;

	if (str == NULL)
	{
		write(1, "\\x00", 4);
		return (4);
	}

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\x", 2);
			count += 2;
			cas = str[i];

			if (cas < 16)
			{
				write(1, "0", 1);
				count++;
			}

			count += hexadml(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}

		i++;
	}

	return (count);
}
