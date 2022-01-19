/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 22:08:29 by sikang            #+#    #+#             */
/*   Updated: 2021/07/14 23:01:21 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;

	new = 0;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (node == 0)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
