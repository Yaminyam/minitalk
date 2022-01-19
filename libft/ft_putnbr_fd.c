/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 18:36:13 by sikang            #+#    #+#             */
/*   Updated: 2021/07/05 20:06:13 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_neg(int nb, int fd)
{
	write(fd, "-", 1);
	if (nb == -2147483648)
	{
		write(fd, "2147483648", 10);
		return (0);
	}
	nb *= -1;
	return (nb);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	s;
	int		devide;
	int		nb;

	devide = 1000000000;
	if (n < 0)
	{
		n = ft_neg(n, fd);
		if (n == 0)
			return ;
	}
	if (n == 0)
		write(fd, "0", 1);
	nb = n;
	while (devide)
	{
		if (nb >= devide)
		{
			s = n / devide + '0';
			n %= devide;
			write(fd, &s, 1);
		}
		devide /= 10;
	}
}
