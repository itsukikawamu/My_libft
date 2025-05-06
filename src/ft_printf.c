/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 04:13:21 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 10:01:10 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_main.h"

static int	ft_vprintf(const char *fmt, va_list ap);
static int	printf_main(const char **fmt, va_list ap);

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		reval;

	va_start(ap, fmt);
	reval = ft_vprintf(fmt, ap);
	va_end(ap);
	return (reval);
}

static int	ft_vprintf(const char *fmt, va_list ap)
{
	int		cnt;
	int		total_len;

	total_len = 0;
	while (*fmt)
	{
		cnt = printf_main(&fmt, ap);
		if (cnt == ERROR)
			return (ERROR);
		if (cnt > INT_MAX - total_len)
			return (ERROR);
		total_len += cnt;
	}
	return (total_len);
}

static int	printf_main(const char **fmt, va_list ap)
{
	int		reval;

	if (**fmt != '%')
	{
		ft_putchar(**fmt);
		(*fmt)++;
		return (1);
	}
	else
	{	
		(*fmt)++;
		reval = convert_specifier(fmt, ap);
		return (reval);
	}
}

