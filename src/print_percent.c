/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 10:12:11 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 10:33:49 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_output.h"

int	print_percent(t_spec spec)
{
	if (spec.flag & LEFT_JUST)
		ft_putchar('%');
	if (!(spec.flag & LEFT_JUST) && spec.flag & ZERO_PADD)
		pad_char('0', spec.width - 1);
	else
		pad_char(' ', spec.width - 1);
	if 	(!(spec.flag & LEFT_JUST))
		ft_putchar('%');
	return (1);
}