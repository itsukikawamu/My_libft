/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:09:22 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 14:36:00 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_output.h"

int	pad_char(char c, int len)
{
	while (len-- > 0)
	{
		if (ft_putchar(c) == -1)
			return (-1);
	}
	return (0);
}
