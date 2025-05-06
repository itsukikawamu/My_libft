/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:27:59 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 12:18:06 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_output.h"

int	print_hex()
{
	
}

static void	init_u_int_ctx(t_num_ctx *ctx, t_arg arg, t_spec spec);

int	print_u_int(t_arg arg, t_spec spec)
{
	t_num_ctx	ctx;
	
	init_u_int_ctx(&ctx, arg, spec);
	if (is_space_padded(spec))
		pad_char(' ', ctx.pad.width);
	if (spec.flag & ZERO_PADD && spec.prec == DEFAULT)
		pad_char('0', ctx.pad.width);
	else
		pad_char('0', ctx.pad.prec);
	if (ctx.num_len > 0)
		ft_putstr(ctx.num_str);
	if (spec.flag & LEFT_JUST)
		pad_char(' ', ctx.pad.width);
	return (ctx.total_len + ctx.pad.width);
}

static void	init_hex_ctx(t_num_ctx *ctx, t_arg arg, t_spec spec)
{
	ctx->sign = 0;
	ctx->val = (long)arg.u;
	ctx->num_str = ltox(ctx->val);
	ctx->num_len = ft_strlen(ctx->num_str);
	ctx->pad.prec = set_prec_pad(ctx->val, spec, &ctx->num_len);
	ctx->total_len = !!ctx->sign + ctx->pad.prec + ctx->num_len;
	ctx->pad.width = set_width_pad(spec, ctx->total_len);
}

static	char *ltox()
{
	
}