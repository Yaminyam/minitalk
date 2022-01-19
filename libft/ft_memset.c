/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 14:20:17 by sikang            #+#    #+#             */
/*   Updated: 2021/07/02 14:20:22 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	uc;
	char			*sstr;

	uc = (unsigned char)c;
	sstr = (char *)str;
	while (n--)
	{
		*sstr = uc;
		sstr++;
	}
	return (str);
}
