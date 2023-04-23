#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: constant char.
 * 
 * Return: an integer.
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int num_chars = vfprintf(stdout, format, args);
	va_end(args);
	return(num_chars);
}
