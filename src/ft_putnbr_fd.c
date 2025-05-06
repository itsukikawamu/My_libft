/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 06:02:57 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/06 13:37:56 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nb;
	int		div;

	nb = (long)n;
	if (nb < 0)
	{
		if (write(fd, "-", 1) == -1)
			return (0);
		nb = -nb;
	}
	div = 1;
	while (nb / div >= 10)
		div *= 10;
	while (div > 0)
	{
		c = (nb / div) + '0';
		if (write(fd, &c, 1) == -1)
			return (0);
		nb %= div;
		div /= 10;
	}
	return (0);
}
