#include "main.h"

/**
 * init_params - clears struct fields and reset buf
 * @params: the parameters struct
 * @ap: the argument pointer
 *
 * Return: void
 */
<<<<<<< HEAD
=======

>>>>>>> origin/master
void init_params(params_t *params, va_list ap)
{
	params->unsign = 0;

	params->plus_flag = 0;
	params->space_flag = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

<<<<<<< HEAD
	params->width = 0;
	params->precision = UINT_MAX;

=======

	params->width = 0;
	params->precision = UINT_MAX;


>>>>>>> origin/master
	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)ap;
}
