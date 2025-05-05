/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikawamuk <ikawamuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 12:06:01 by ikawamuk          #+#    #+#             */
/*   Updated: 2025/04/29 16:04:46 by ikawamuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*p;

	new_list = NULL;
	while (lst)
	{
		p = ft_lstnew(f(lst->content));
		if (!p)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, p);
		lst = lst->next;
	}
	return (new_list);
}

/*
void *lstmap_f(void *content);

int main(void)
{
	t_list	*ret;
	t_list	*l;
	l = ft_lstnew(ft_strdup("abc"));
	l->next = ft_lstnew(ft_strdup("ABC"));
	l->next->next = ft_lstnew(ft_strdup("(x_x)"));
	ret = ft_lstmap(l, &lstmap_f, &free);
	while (ret)
	{
		printf("%s\n", (char *)ret->content);
		ret = ret->next;
	}
	return (0);
}

void *lstmap_f(void *content)
{
    if (!content)
        return NULL;
    return ft_strdup((char *)content);
}
*/