/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:37:38 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 19:21:58 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isxdigit(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'f')
		|| ('A' <= c && c <= 'F'))
		return (0x0010);
	return (0);
}

/*
#include <stdio.h>
#include <assert.h>
#include <limits.h>
int main(void)
{
	assert(ft_isxdigit('0'));
	assert(ft_isxdigit('9'));
	assert(ft_isxdigit('a'));
	assert(ft_isxdigit('f'));
	assert(ft_isxdigit('A'));
	assert(ft_isxdigit('F'));

	assert(!ft_isxdigit('g'));
	assert(!ft_isxdigit('z'));
	assert(!ft_isxdigit('G'));
	assert(!ft_isxdigit('Z'));
	assert(!ft_isxdigit('/'));
	assert(!ft_isxdigit(':'));
	assert(!ft_isxdigit('@'));
	assert(!ft_isxdigit('['));
	assert(!ft_isxdigit('\''));
	assert(!ft_isxdigit('{'));
	assert(!ft_isxdigit(0));
	assert(!ft_isxdigit(127));
	assert(!ft_isxdigit(INT_MAX));
	assert(!ft_isxdigit(INT_MIN));
	
	printf("all test passed\n");
	return (0);
}
*/