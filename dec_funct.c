#include "main.h"

/**
 * print_num - Prints an integer
 * @list: List of arguments
 *
 * Return: Number of digits printed
 **/
int print_num(va_list list)
{
	int count = 0, n;
	int input = va_arg(list, int);
	unsigned int countn = 1;
	unsigned int number;
	char ch;

	if (input < 0)
	{
		ch = '-';
		count += write(STDOUT_FILENO, &ch, 1);
		number = (unsigned long)(-1 * input);
	}
	else
	{
		number = (unsigned long)input;
	}

	input = number;

	while (number >= 10)
	{
		number /= 10;
		countn *= 10;
	}

	while (countn >= 1)
	{
		n = (int)((input / countn) % 10);
		ch = n + '0';
		write(STDOUT_FILENO, &ch, 1);
		countn /= 10;
		count++;
	}

	return (count);
}

/**
 * print_un - Prints an unsigned integer
 * @list: List of arguments
 *
 * Return: Number of digits printed
 **/
int print_un(va_list list)
{
	int count = 0, n;
	unsigned int input = va_arg(list, unsigned int);
	unsigned int countn = 1;
	unsigned int number;
	char ch;

	number = input;

	while (number >= 10)
	{
		number /= 10;
		countn *= 10;
	}

	while (countn >= 1)
	{
		n = (unsigned int)((input / countn) % 10);
		ch = n + '0';
		write(STDOUT_FILENO, &ch, 1);
		countn /= 10;
		count++;
	}

	return (count);
}
