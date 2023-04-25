#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define OUTPUT_BUF_SIZE 1024
<<<<<<< HEAD
#define BUF_FLUSH-1


#define NULL_STRING "(null)"
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE  1
#define CONVERT_UNISIGNED  2

/**
 * struct parameters - parameters struct
 *
 * @unsign: flag if unisgned value
 *
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if _flag specified
 * @minus_flag: on if _flag specified
 *
 * @width: field width specified
 * @precision: field precision specified
=======
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

#define CONVERT_LOWERCASE  1
#define CONVERT_UNSIGNED   2

/**
 *struct parameters - parameters struct
 *
 * @unign: flag if unsigned value
 *
 * @plus_flag: on if plus_flag specified
 * @space_flag: on if hashtag_flag specified
 * @hashtag_flag: on if_flag specified
 * @zero_flag: on if_flag pecified
 * @minus_flag: on if_flag specified
 *
 * @width: field with specified
 * @precision: flied precision specified
>>>>>>> origin/master
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l_modifier is specified
 *
<<<<<<< HEAD
=======
 *
>>>>>>> origin/master
 */
typedef struct parameters
{
	unsigned int unsign       : 1;
<<<<<<< HEAD

	unsigned int plus_flag    : 1;
	unsigned int space_flag   : 1;
	unsigned int hashtag_flag : 1;
        unsigned int zero_flag    : 1;
        unsigned int minus_flag   : 1;

        unsigned int width;
        unsigned int precision;
        unsigned int h_modifier   : 1;
        unsigned int l_modifier   : 1;
} params_t;

/**
 * struct specifier -Struct token
 *
 * @specifier: format token
 * @f: The function associated
=======
	unsigned int plus_flag    : 1;
	unsigned int space_flag   : 1;
	unsigned int hashtag_flag : 1;
	unsigned int zero_flag    : 1;
	unsigned int minus_flag   : 1;

	unsigned int width;
	unsigned int precision;

	unsigned int h_modifier   : 1;
	unsigned int l_modifier   : 1;
} params_t;
/**
 * struct specifier - struct token
 *
 * @specifier: format token
 * @f:The function associated
>>>>>>> origin/master
 */
typedef struct specifier
{
	char *specifier;
	int (*f) (va_list, params_t *);
} specifier_t;
<<<<<<< HEAD
=======

>>>>>>> origin/master
/* _put.c module */
int _puts(char *str);
int _putchar(int c);

<<<<<<< HEAD
/*print functions.c module */
=======
/* printf_function.c module */
>>>>>>> origin/master
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
<<<<<<< HEAD
int print_s(va_list ap, params_t *params);

/* number.c module */
char *convert(long int num, int base, int flags, params_t *params);
=======
int print_S(va_list ap, params_t *params);

/* number.c module */
char *convert(long int num, int base, int flag, params_t *params);
>>>>>>> origin/master
int print_unsigned(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);

/* specifier.c module */
<<<<<<< HEAD
int (*get_specifier(char *s)) (va_list ap, params_t *params);
=======
int (*get_specifier(char *s))(va_list ap, params_t *params);
>>>>>>> origin/master
int get_print_func(char *s, va_list ap, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);
char *get_width(char *s, params_t *params, va_list ap);

<<<<<<< HEAD
/* convert_number.c module */
=======
/* convert number.c module */
>>>>>>> origin/master
int print_hex(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_binary(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);

<<<<<<< HEAD
/* simple_pointers.c module */
int print_from_to(char *start, char *stop, char *except);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);

/* print_number.c module */
=======
/* simple_printers.c module */
int print_from_to(char *start, char *stop, char * except);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);

/* print number.c module */
>>>>>>> origin/master
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);

<<<<<<< HEAD
/*params.c module */
void init_params(params_t *params, va_list ap);

/* string_fields.c module */
char *get_precision(char *p, params_t *params, va_list ap);

/* _printf.c module */
=======
/* params.c module*/
void init_params(params_t *params, va_list ap);

/* string field.c module */
char *get_precision(char *p, params_t *params, va_list ap);

/* _print.c modul */
>>>>>>> origin/master
int _printf(const char *format, ...);

#endif
