/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:17:47 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 11:46:15 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_output.h"

static void	output_dec(t_num_ctx ctx, t_spec spec);
static void	init_dec_ctx(t_num_ctx *ctx, t_arg arg, t_spec spec);

int	print_dec(t_arg arg, t_spec spec)
{
	t_num_ctx	ctx;

	init_dec_ctx(&ctx, arg, spec);
	output_dec(ctx, spec);
	free(ctx.num_str);
	return (ctx.total_len + ctx.pad.width);
}

static void	output_dec(t_num_ctx ctx, t_spec spec)
{
	if (is_space_padded(spec))
		pad_char(' ', ctx.pad.width);
	if (ctx.sign)
		ft_putchar(ctx.sign);
	if (spec.flag & ZERO_PADD && spec.prec == DEFAULT)
		pad_char('0', ctx.pad.width);
	else
		pad_char('0', ctx.pad.prec);
	if (ctx.num_len > 0)
		ft_putstr(ctx.num_str);
	if (spec.flag & LEFT_JUST)
		pad_char(' ', ctx.pad.width);
}

int	is_space_padded(t_spec spec)
{
	if (spec.flag & LEFT_JUST)
		return (0);
	if (spec.flag & ZERO_PADD && spec.prec == DEFAULT)
		return (0);
	return (1);
}

static void	init_dec_ctx(t_num_ctx *ctx, t_arg arg, t_spec spec)
{
	ctx->val = (long)arg.i;
	ctx->sign = set_sign_abs(&ctx->val, spec.flag);
	ctx->num_str = ft_ltoa(ctx->val);
	ctx->num_len = ft_strlen(ctx->num_str);
	ctx->pad.prec = set_prec_pad(ctx->val, spec, &ctx->num_len);
	ctx->total_len = !!ctx->sign + ctx->pad.prec + ctx->num_len;
	ctx->pad.width = set_width_pad(spec, ctx->total_len);
}

// #include <stdio.h>
// int main(void)
// {
// 	// t_dec_ctx ctx;
// 	t_arg arg;
// 	arg.i = 10;
// 	t_spec spec;
// 	spec.flag = 0;
// 	spec.prec = DEFAULT;
// 	spec.width = DEFAULT;
// 	spec.type = DEC;
// 	//init_dec_ctx(&ctx, arg, spec);
// 	//printf("val: %ld, sign: %c, num_str: %s", ctx.val, ctx.sign, ctx.num_str);
// 	int rev = print_dec(arg, spec);
// 	printf("\nreturn value: %d\n", rev);
// }
