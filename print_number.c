#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
<<<<<<< HEAD
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return(c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
=======
 * Return: 1 if digit, 0 is otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - return the length of a string
>>>>>>> origin/master
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;
<<<<<<< HEAD
	while (*s++)
		i++;
	return(i);
=======

	while (*s++)
		i++;
	return (i);
>>>>>>> origin/master
}

/**
 * print_number - prints a number with options
 * @str: the base number as a string
 * @params: the parameter struct
 *
 * Return: chars printed
 */
int print_number(char *str, params_t *params)
{
	unsigned int i = _strlen(str);
<<<<<<< HEAD
	int neg = (!params->unsign && &str == '-');
=======
	int neg = (!params->unsign && *str == '-');
>>>>>>> origin/master

	if (!params->precision && *str == '0' && !str[1])
		str = "";
	if (neg)
	{
		str++;
		i--;
	}
	if (params->precision != UINT_MAX)
		while (i++ < params->precision)
			*--str = '0';
	if (neg)
		*--str = '-';
	if (!params->minus_flag)
		return (print_number_right_shift(str, params));
	else
		return (print_number_left_shift(str, params));
}

/**
<<<<<<< HEAD
 * print_number_right_shift - prints a number with options
=======
 * print_number_right_shift - prints a number a number with options
>>>>>>> origin/master
 * @str: the base number as a string
 * @params: the parameter struct
 *
 * Return: chars printed
 */
int print_number_right_shift(char *str, params_t *params)
{
	unsigned int n = 0, neg, neg2, i = _strlen(str);
	char pad_char = ' ';

	if (params->zero_flag && !params->minus_flag)
		pad_char = '0';
	neg = neg2 = (!params->unsign && *str == '-');
	if (neg && i < params->width && pad_char == '0' && !params->minus_flag)
		str++;
	else
		neg = 0;
<<<<<<< HEAD
	if ((params->plus_flag && !neg2) || (!params->plus_flag && params->space_flag && !neg2))
		i++;
	if (neg && pad_char == '0')
		n += _putchar('-');
	if (params->plus_flag && !neg2 &&pad_char == '0' && !params->unsign)
		n += _ptchar('+');
	else if (!params->pls_flag && params->space_flag && !neg2 && !params->unsign && params->zero_flag)
		n += _putchar(' ');
	while (i++ < params->width)
		n += _putchar(pad_char);
	if (neg && pad_char == ' ')
		n += _putchar('-');
	if (params->plus_flag && !neg2 && pad_char == ' ' && !params->zero_flag)
=======
	if ((params->plus_flag && !neg2) ||
			(!params->plus_flag && params->space_flag && !neg2))
		i++;
	if (neg && pad_char == '0')
		n += _putchar('-');
	if (params->plus_flag && !neg2 && pad_char == '0' && !params->unsign)
		n += _putchar('+');
	else if (!params->plus_flag && params->space_flag && !neg2 &&
			!params->unsign && params->zero_flag)
>>>>>>> origin/master
		n += _putchar(' ');
	n += _puts(str);
	return (n);
}

/**
 * print_number_left_shift - prints a number with options
 * @str: the base number as a string
 * @params: the parameter struct
 *
 * Return: chars printed
 */
int print_number_left_shift(char *str, params_t *params)
{
<<<<<<< HEAD
	unsigned int n = 0, neg, i = _strlen(str);
	char pad_char = ' ';
	if (params->zero_flag && !params->minus_flag)
		pad_char = '0';
=======
	unsigned int n = 0, neg, neg2, i = _strlen(str);
	char pad_char = ' ';

	if (params->zero_flag && !params->minus_flag)
		pad_char = ' ';
>>>>>>> origin/master
	neg = neg2 = (!params->unsign && *str == '-');
	if (neg && i < params->width && pad_char == '0' && !params->minus_flag)
		str++;
	else
		neg = 0;
<<<<<<< HEAD
	if (params->plus_flag && !neg2 && !params->unsign)
		n += _putchar('+'), i++;
	else if (params->space_flag && !neg2 && !params->unsign)
=======

	if (params->plus_flag && !neg2 && !params->unsign)
>>>>>>> origin/master
		n += _putchar(' '), i++;
	n += _puts(str);
	while (i++ < params->width)
		n += _putchar(pad_char);
	return (n);
<<<<<<< HEAD
=======
}
>>>>>>> origin/master
