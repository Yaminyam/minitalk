/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:23:39 by sikang            #+#    #+#             */
/*   Updated: 2021/07/02 14:24:04 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*ss;

	uc = (unsigned char)c;
	ss = (unsigned char *)s;
	while (n--)
	{
		if (*ss == uc)
			return (ss);
		ss++;
	}
	return (0);
}
