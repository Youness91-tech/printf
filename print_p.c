#include "main.h"

/**
 * hexadl - Prints a char in hexadecimal lower format.
 * @n: The argument char.
 *
 * Return: Number of hexadecimal digits printed.
 */
int hexadl(unsigned long int n)
{
	char ch;
	int count = 0, i = 0, j;
	unsigned long int m = n;
	int *up_hex = NULL;

	do {
		m /= 16;
		count++;
	} while (m > 0);

	up_hex = malloc(sizeof(int) * count);
	if (up_hex == NULL)
		return (-1);

	while (n > 0)
	{
		up_hex[i] = n % 16;
		n = n / 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (up_hex[j] > 9)
			ch = 'a' + (up_hex[j] % 10);
		else
			ch = up_hex[j] + '0';
		write(1, &ch, 1);
	}

	free(up_hex);

	return (count);
}

/**
 * print_p - prints an hexgecimal number.
 * @list: The arguments.
 *
 * Return: The counter.
 */
int print_p(va_list list)
{
	int count = 0;
	void *pf;

	pf = va_arg(list, void*);

	if (pf == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}

	write(1, "0x", 2);
	count += 2;

	count += hexadl((unsigned long int)pf);

	return (count);
}
