#include "main.h"

/**
<<<<<<< HEAD
 * _printf - prints anything
 * @format: the format string
 * 
 * Return: number of bytes
=======
 * _printf - printfs anything
 * @format: the format string
 *
 * Return: number of bytes printed
>>>>>>> origin/master
 */
int _printf(const char *format, ...)
{
	int sum = 0;
	va_list ap;
<<<<<<< HEAD
	char *p, *strat;
=======
	char *p, *start;
>>>>>>> origin/master
	params_t params = PARAMS_INIT;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
<<<<<<< HEAD
		return(-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return(-1);
=======
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
>>>>>>> origin/master
	for (p = (char *)format; *p; p++)
	{
		init_params(&params, ap);
		if (*p != '%')
		{
			sum += _putchar(*p);
<<<<<<< HEAD
			continue;
		}
		start = p;
		p++;
		while (get_flag(p, &params))
		{
			p++;
=======
				continue;
		}
		start = p;
		p++;
		while (get_flag(p, &params)) /* while char at p is flag char */
		{
			p++; /* next char */
>>>>>>> origin/master
		}
		p = get_width(p, &params, ap);
		p = get_precision(p, &params, ap);
		if (get_modifier(p, &params))
			p++;
		if (!get_specifier(p))
<<<<<<< HEAD
			sum += print_from_to(start, p, params.l_modifier || params.h_modifier ? p - 1 : 0);
=======
			sum += print_from_to(start, p,
				params.l_modifier || params.h_modifier ? p - 1 : 0);
>>>>>>> origin/master
		else
			sum += get_print_func(p, ap, &params);
	}
	_putchar(BUF_FLUSH);
	va_end(ap);
	return (sum);
}
