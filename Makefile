# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sikang <sikang@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 11:05:55 by sikang            #+#    #+#              #
#    Updated: 2022/01/12 12:50:45 by sikang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = server.c client.c
OBJS = $(SRCS:.c=.o)
NAME = minitalk

all: $(NAME)

bonus: $(NAME)

server: server.o libft
	$(CC) -o $@ $< -Llibft -lft

client: client.o libft
	$(CC) -o $@ $< -Llibft -lft

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

libft:
	$(MAKE) bonus -C libft

clean:
	rm -f $(OBJS)
	$(MAKE) -C libft clean

fclean: clean
	rm -f server client
	$(MAKE) -C libft fclean

re: fclean all

$(NAME): server client

.PHONY: all bonus libft clean fclean re
