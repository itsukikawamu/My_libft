/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:03:32 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 19:23:53 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispunct(int c)
{
	if (ft_isprint(c) && !ft_isalnum(c) && c != ' ')
		return (0x4000);
	return (0);
}

/*
#include <stdio.h>
#include <assert.h>
#include <limits.h>
int main(void)
{
	assert(ft_ispunct('/'));
	assert(ft_ispunct(':'));
	assert(ft_ispunct('@'));
	assert(ft_ispunct('['));
	assert(ft_ispunct('\''));
	assert(ft_ispunct('{'));
	assert(ft_ispunct('~'));

	assert(!ft_ispunct(' '));
	assert(!ft_ispunct('a'));
	assert(!ft_ispunct('z'));
	assert(!ft_ispunct('A'));
	assert(!ft_ispunct('Z'));
	assert(!ft_ispunct('0'));
	assert(!ft_ispunct('9'));
	assert(!ft_ispunct(0));
	assert(!ft_ispunct(127));
	assert(!ft_ispunct(INT_MAX));
	assert(!ft_ispunct(INT_MIN));
	
	printf("all test passed\n");
	return (0);
}
*/