/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 06:37:32 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 05:52:12 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_format.h"


#include <stdio.h>


static void	reset_spec(t_spec *spec);
static int	is_error(t_spec spec);

int	convert_specifier(const char **fmt, va_list ap)
{
	t_arg	arg;
	t_spec	spec;
	int		cnt;

	reset_spec(&spec);
	get_format_spec(fmt, &spec);
	if (is_error(spec))
		return (ERROR);
	if (spec.flag & WIDTH_ARG)
		spec.width = va_arg(ap, int);
	if (spec.flag & PREC_ARG)
		spec.prec = va_arg(ap, int);
	pop_varg(&arg, spec.type, ap);
	cnt = output(arg, spec);
	return (cnt);
}

static int	is_error(t_spec spec)
{
	if (spec.flag == ERROR)
		return (1);
	if (spec.width == ERROR)
		return (1);
	if (spec.prec == ERROR)
		return (1);
	if (spec.type == ERROR)
		return (1);
	return (0);
}

static void	reset_spec(t_spec *spec)
{
	spec->flag = 0;
	spec->width = DEFAULT;
	spec->prec = DEFAULT;
	spec->type = DEFAULT;
}

// void	print_varg(const char *fmt, ...);
// int main(void)
// {
// 	print_varg("%c", 'X');
// }
// void	print_varg(const char *fmt, ...)
// {
// 	va_list ap;
// 	va_start(ap, fmt);
// 	convert_specifier(&fmt, ap);
// 	va_end(ap);
// }
