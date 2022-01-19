/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:23:59 by sikang            #+#    #+#             */
/*   Updated: 2021/07/05 20:48:11 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		n;
	char	*p;

	n = ft_strlen(s1);
	p = (char *)malloc(n + 1);
	if (!p)
		return (0);
	p = (char *)ft_memcpy(p, s1, n + 1);
	return (p);
}
