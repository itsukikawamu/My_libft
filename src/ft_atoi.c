/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:00:55 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/30 13:09:34 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isspace(int c);
static int	issign(int c);
char		*ft_strcpy(char *dest, const char *src);

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		result;
	int		sign;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = 1;
	if (issign(nptr[i]))
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0') * sign;
		i++;
	}
	return (result);
}

static int	issign(int c)
{
	if (c == '+' || c == '-')
		return (FT_ISSIGN);
	return (0);
}

int	ft_isspace(int c)
{
	if (c == ' ')
		return (FT_ISSPACE);
	if (c == '\f')
		return (FT_ISSPACE);
	if (c == '\n')
		return (FT_ISSPACE);
	if (c == '\r')
		return (FT_ISSPACE);
	if (c == '\t')
		return (FT_ISSPACE);
	if (c == '\v')
		return (FT_ISSPACE);
	return (0);
}

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*s
#include <stdlib.h>
int main(void)
{
	printf("%d\n",atoi("9223372036854775808"));
	printf("%d\n",ft_atoi("9223372036854775808"));
}
*/