/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:36:11 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/11 12:22:59 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	sub_len;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	sub_len = ft_strnlen(s + start, len);
	return (ft_strndup(s + start, sub_len));
}

/*
int main(void){
	char *s = "abcdefghi";
	size_t i = 3;
	size_t len = 3;
	printf("%s\n", ft_substr(s, i, len));
	s = "abcd";
	printf("%s\n", ft_substr(s, i, len));
	s = "ab";
	printf("%s\n", ft_substr(s, i, len));
	s = NULL;
	printf("%s\n", ft_substr(s, i, len));	
}
*/