/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:25:28 by sikang            #+#    #+#             */
/*   Updated: 2021/07/14 19:38:16 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cnt;

	cnt = ft_strlen(src);
	while (dstsize > 1 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	if (dstsize)
		*dst = '\0';
	return (cnt);
}
