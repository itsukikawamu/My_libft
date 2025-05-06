/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 22:25:52 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 11:33:27 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_output.h"

int	output(t_arg arg, t_spec spec)
{
	int	cnt;

	cnt = 0;
	if (spec.type == CHAR)
		cnt = print_char(arg, spec);
	else if (spec.type == DEC)
		cnt = print_dec(arg, spec);
	else if (spec.type == U_INT)
		cnt = print_u_int(arg, spec);
	// else if (spec.type == HEX_LOW || spec.type == HEX_UP)
	// 	cnt = print_hex(arg, spec);
	// else if (spec.type == STR)
	// 	cnt = print_str(arg, spec);
	// else if (spec.type == PTR)
	// 	cnt = print_ptr(arg, spec);
	else if (spec.type == PERCENT)
		cnt = print_percent(spec);
	else
			cnt = ERROR;
	return (cnt);
}

