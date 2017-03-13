# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 13:22:23 by yooi              #+#    #+#              #
#    Updated: 2016/08/23 14:22:17 by yooi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS_DIR = srcs/
INCL_DIR = includes/
SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
CFLAGS = -Wall -Wextra -Werror
CHANGED = $(addprefix $(SRCS_DIR), $(SRC_FILES))

all: $(NAME)

$(NAME): GETO
		ar rc $(NAME) $(patsubst %.c, %.o, $(SRC_FILES))
			ranlib $(NAME)

GETO: 
	gcc -I$(INCL_DIR) $(CFLAGS) -c $(CHANGED)

clean:
	/bin/rm -f $(patsubst %.c, %.o, $(SRC_FILES))

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
