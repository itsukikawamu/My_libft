/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:22:57 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/11 17:00:22 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
// includes
# include <stdarg.h>
# include <limits.h>
# include "libft.h"
// const number
# define DEFAULT	-1
# define ERROR		-2
// large function
int		ft_printf(const char *fmt, ...);
size_t	convert_specifier(const char **fmt, va_list ap);

#endif