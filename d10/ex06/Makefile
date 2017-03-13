# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 14:28:36 by yooi              #+#    #+#              #
#    Updated: 2016/08/23 14:40:24 by yooi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
FILES = ft_atoi.c ft_do_op.c ft_putchar.c ft_putnbr.c ft_putstr.c main.c
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)

re: clean all
