/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 07:32:06 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/11 16:43:14 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	if (len > maxlen)
		len = maxlen;
	return (len);
}
