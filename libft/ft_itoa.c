/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 18:33:29 by sikang            #+#    #+#             */
/*   Updated: 2021/07/05 21:41:34 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long long	temp;
	int			minus;

	len = ft_intlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	len--;
	minus = n < 0;
	(((n < 0) && (temp = -(long long)n)) || ((n >= 0) && (temp = n)));
	while (len > -1)
	{
		str[len] = '0' + (temp % 10);
		temp /= 10;
		len--;
	}
	if (minus)
		str[0] = '-';
	return (str);
}
