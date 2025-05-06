/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 22:35:59 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/05 22:24:15 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_output.h"

static void	output_char(t_arg arg, t_spec spec, int *cnt);

int	print_char(t_arg arg, t_spec spec)
{
	int	cnt;

	output_char(arg, spec, &cnt);
	return (cnt);
}

static void	output_char(t_arg arg, t_spec spec, int *cnt)
{
	*cnt = 0;
	if (spec.width > 1 && (spec.flag & LEFT_JUST))
	{
		ft_putchar((char)arg.i);
		pad_char(' ', spec.width - 1);
		*cnt = spec.width;
	}
	else if (spec.width > 1)
	{
		pad_char(' ', spec.width - 1);
		ft_putchar((char)arg.i);
		*cnt = spec.width;
	}
	else
	{
		ft_putchar((char)arg.i);
		*cnt = 1;
	}
}
