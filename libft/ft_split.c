/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 18:32:46 by sikang            #+#    #+#             */
/*   Updated: 2021/07/26 16:14:51 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcnt(char const *str, char to_find, int flag)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (flag == 1 && *str != to_find)
		{
			cnt++;
			flag = 0;
		}
		if (*str == to_find)
			flag = 1;
		str++;
	}
	return (cnt);
}

static const char	*ft_strfind(const char *str, const char needle, size_t len)
{
	char	*e;

	e = (char *)str + len;
	while (*str)
	{
		if (str == e)
			break ;
		if (*str == needle)
			return (str);
		str++;
	}
	return (str);
}

static char	**ft_memfree(char **str)
{
	int	i;

	i = 0;
	while (!str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**new_str;
	int		size;
	long	n;

	size = ft_strcnt(s, c, 1);
	new_str = (char **)malloc(sizeof(char *) * (size + 1));
	if (new_str == 0)
		return (0);
	new_str[size] = 0;
	i = 0;
	while (i < size)
	{
		n = ft_strfind(s, c, ft_strlen(s)) - s;
		if (n != 0)
		{
			new_str[i] = (char *)malloc(sizeof(char) * (n + 1));
			if (new_str[i] == 0)
				return (ft_memfree(new_str));
			ft_strlcpy(new_str[i], s, n + 1);
			i++;
		}
		s += n + 1;
	}
	return (new_str);
}
