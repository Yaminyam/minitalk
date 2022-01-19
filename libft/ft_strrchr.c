/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:33:13 by sikang            #+#    #+#             */
/*   Updated: 2021/07/15 00:47:42 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = (char *)s + ft_strlen(s);
	if (*t == (char)c)
		return (t);
	t--;
	while (*t)
	{
		if (*t == (char)c)
			return (t);
		if (t == s)
			break ;
		t--;
	}
	return (0);
}
