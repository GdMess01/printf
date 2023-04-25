#include "main.h"

/**
 * print_from_to - prints a range of char addresses
 * @start: starting address
 * @stop: stopping address
 * @except: except address
 *
 * Return: number bytes printed
 */
int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}

/**
<<<<<<< HEAD
 * print_rev - prints string in reverse
 * @ap: string
 * @params: the parameters struct
=======
 * print_rev- prints string in reverse
 * @ap: string
 * @params: the parameter struct
>>>>>>> origin/master
 *
 * Return: number bytes printed
 */
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
<<<<<<< HEAD
		for (; len > 0; len--; str--)
=======
		for (; len > 0; len--, str--)
>>>>>>> origin/master
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - prints string in rot13
 * @ap: string
<<<<<<< HEAD
 * @params: the parameters struct
 *
 * Return: number bytes printed
 */
=======
 * @params: the parameter struct
 *
 * Return: number bytes printed
 */

>>>>>>> origin/master
int print_rot13(va_list ap, params_t *params)
{
	int i, index;
	int count = 0;
<<<<<<< HEAD
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM     nopqrstuvwxyzabcdefghijklm";
=======
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM       nopqrstuvwxyzabcdefghijklm";
>>>>>>> origin/master
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	index = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			index = a[i] - 65;
			count += _putchar(arr[index]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}
