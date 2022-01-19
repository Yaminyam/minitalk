/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 18:32:19 by sikang            #+#    #+#             */
/*   Updated: 2021/07/14 23:11:58 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	a;
	size_t	b;

	a = 0;
	while (s1[a] && ft_strchr(set, s1[a]))
		a++;
	b = ft_strlen(s1);
	while (s1[b - 1] && ft_strchr(set, s1[b - 1]))
	{
		if (b - 1 < 1)
			break ;
		b--;
	}
	if (a == ft_strlen(s1))
		return (ft_strdup(""));
	str = (char *)malloc(b - a + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + a, b - a + 1);
	return (str);
}
