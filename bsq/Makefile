# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schoque <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/27 22:28:41 by schoque           #+#    #+#              #
#    Updated: 2016/08/27 22:28:42 by schoque          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bsq

SRCS	=	srcs/main.c 			\
			srcs/ft_putstuff.c		\
			srcs/map_tools.c		\
			srcs/bsq.c

OBJS	=	$(SRCS:srcs/%.c=%.o)

INCL	=	includes/


all: $(NAME)

$(OBJS):
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCL) 

$(NAME): $(OBJS)
	gcc -Wall -Wextra -Werror $(OBJS) -o $(NAME) -fsanitize=address

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
