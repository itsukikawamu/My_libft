/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 05:57:00 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 13:38:33 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		if (ft_putchar_fd(*s++, fd) == -1)
			return (-1);
	}
}

/*
int main(void)
{
	char *s = NULL;

	ft_putstr_fd(s, 1);
	return (0);
}
*/