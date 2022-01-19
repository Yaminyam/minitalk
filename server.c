/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:41:24 by sikang            #+#    #+#             */
/*   Updated: 2022/01/13 05:32:10 by sikang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"

static void	action(int sig, siginfo_t *info, void *context)
{
	static int				i;
	static unsigned char	c;
	static pid_t			client_pid;

	(void)context;
	if (client_pid == 0) client_pid = info->si_pid;
	c |= (sig == SIGUSR1);
	if (++i == 8)
	{
		i = 0;
		if(c == 0)
		{
			kill(client_pid, SIGUSR1);
			client_pid = 0;
			return ;
		}
		write(1, &c, 1);
		c = 0;
	}
	else c <<= 1;
}

int			main(void)
{
	struct sigaction	act;

	ft_putstr_fd("Server PID : ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putstr_fd("\n", 1);
	act.sa_sigaction = action;
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, 0);
	sigaction(SIGUSR2, &act, 0);
	while (1)
		pause();
	return (0);
}
