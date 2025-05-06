/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_dec_ctx_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 22:22:10 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 09:40:05 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_output.h"

long	set_prec_pad(long val, t_spec spec, long *num_len)
{
	long	prec_pad;

	prec_pad = 0;
	if (spec.prec == 0 && val == 0)
		*num_len = 0;
	else if (spec.prec > *num_len)
		prec_pad = spec.prec - *num_len;
	return (prec_pad);
}

char	set_sign_abs(long *val, int flag)
{
	char	sign;

	sign = 0;
	if (*val < 0)
	{
		sign = '-';
		*val = -(*val);
	}
	else if (flag & SIGNED)
		sign = '+';
	else if (flag & BLANK_POS)
		sign = ' ';
	return (sign);
}

long	set_width_pad(t_spec spec, long total_len)
{
	if (spec.width == DEFAULT || spec.width <= total_len)
		return 0;
	return (spec.width - total_len);
}
