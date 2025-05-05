/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 07:32:06 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/05 07:32:36 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = ft_strlen(s);
	if (len > maxlen)
		len = maxlen;
	return (len);
}

