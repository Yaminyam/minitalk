/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:23:22 by sikang            #+#    #+#             */
/*   Updated: 2021/07/15 00:24:24 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	else
	{
		while (len--)
		{
			*d = *s;
			s++;
			d++;
		}
	}
	return (dst);
}
