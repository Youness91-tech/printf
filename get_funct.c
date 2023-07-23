#include "main.h"

/**
 *get_func - selects the right function corresponding to format specified
 *@ch:input format
 *Return:pointer to function that corresponds with specified format
 *
 */
int (*get_func(char ch))(va_list)
{
	int i = 0;
	ops_f print_op[] = {
		{'c', print_ch},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'b', print_bin},
		{'u', print_unsigned},
		{'o', print_oct},
		{'X', print_Hex},
		{'x', print_hex},
		{'S', print_SS},
		{'p', print_pp},
		{'r', print_rr},
		{'R', print_rot13},
		{'\0', NULL}
	};
	while (print_op[i].operation)
	{
		if (ch == print_op[i].operation)
		{
			return (print_op[i].func);
		}
		i++;

	}
	return (NULL);
}
