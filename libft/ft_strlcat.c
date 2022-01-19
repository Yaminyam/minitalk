/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:05:43 by sikang            #+#    #+#             */
/*   Updated: 2021/07/02 16:51:27 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	cnt;
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	ssize;

	cnt = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	dst += dlen;
	if (dlen >= dstsize)
		return (slen + dstsize);
	ssize = dstsize - dlen;
	while (ssize)
	{
		if (ssize == 1 || !*src)
		{
			*dst = '\0';
			break ;
		}
		*dst = *src;
		dst++;
		src++;
		ssize--;
	}
	return (dlen + slen);
}
