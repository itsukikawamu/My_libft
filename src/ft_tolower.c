/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:29:02 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/05/11 12:23:48 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c -= ('A' - 'a');
	return (c);
}

/*
#include <stdio.h>
#include <assert.h>
#include <limits.h>
int main(void)
{
    assert(ft_tolower('A') == 'a');
    assert(ft_tolower('Z') == 'z');
    assert(ft_tolower('M') == 'm');
    assert(ft_tolower('a') == 'a');
    assert(ft_tolower('z') == 'z');
    assert(ft_tolower('0') == '0');
    assert(ft_tolower('9') == '9');
    assert(ft_tolower('!') == '!');
    assert(ft_tolower('@') == '@');
    assert(ft_tolower(' ') == ' '); 
    assert(ft_tolower(0) == 0);
    assert(ft_tolower(127) == 127);
    printf("all test passed\n");
    return (0);
}
*/