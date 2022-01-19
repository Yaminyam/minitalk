/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:39:54 by sikang            #+#    #+#             */
/*   Updated: 2021/07/05 20:00:35 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*find;
	char	*s;
	char	*e;

	e = (char *)haystack + len;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (haystack == e)
			break ;
		find = (char *)needle;
		s = (char *)haystack;
		while (*s && *find && *s == *find)
		{
			s++;
			find++;
			if (s == e)
				break ;
		}
		if (!*find)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
