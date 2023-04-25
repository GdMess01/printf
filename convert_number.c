#include "main.h"

/**
 * print_hex - prints unsigned hex numbers in lowercase
 * @ap: the argument pointer
<<<<<<< HEAD
 * @params: the parameters struct
=======
 * @params: the parameter struct
>>>>>>> origin/master
 *
 * Return: bytes printed
 */
int print_hex(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
<<<<<<< HEAD
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	
=======
>>>>>>> origin/master
	str = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && l)
	{
		*--str = 'x';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
<<<<<<< HEAD
 * print_HEX - prints unsigned hex numbers in uppercase
 * @ap; the argument pointer
=======
 * print_HEX - print unsigned hex number in uppercase
 * @ap: the argument pointer
>>>>>>> origin/master
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
<<<<<<< HEAD
=======

>>>>>>> origin/master
int print_HEX(va_list ap, params_t *params)
{
	unsigned long l;
	int c = 0;
	char *str;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	str = convert(l, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
	{
		*--str = 'X';
		*--str = '0';
	}
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
<<<<<<< HEAD
 * print_binary - prints unsigned octal nmbers
=======
 * print_binary - prints unsigned binary number
>>>>>>> origin/master
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
int print_binary(va_list ap, params_t *params)
{
	unsigned int n = va_arg(ap, unsigned int);
	char *str = convert(n, 2, CONVERT_UNSIGNED, params);
	int c = 0;

	if (params->hashtag_flag && n)
		*--str = '0';
	params->unsign = 1;
	return (c += print_number(str, params));
}

/**
 * print_octal - prints unsigned octal numbers
 * @ap: the argument pointer
<<<<<<< HEAD
 * @params: the parameters struct
 *
 * Return: bytes printed
 */
=======
 * @params: the parameter struct
 *
 * Return: bytes printed
 */

>>>>>>> origin/master
int print_octal(va_list ap, params_t *params)
{
	unsigned long l;
	char *str;
	int c = 0;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
<<<<<<< HEAD
	        l = (unsigned short int)va_arg(ap, unsigned int);
=======
		l = (unsigned short int)va_arg(ap, unsigned int);
>>>>>>> origin/master
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	str = convert(l, 8, CONVERT_UNSIGNED, params);

	if (params->hashtag_flag && l)
		*--str = '0';
	params->unsign = 1;
	return (c += print_number(str, params));
}
