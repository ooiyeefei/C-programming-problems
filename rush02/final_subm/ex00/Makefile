# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yooi <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/28 21:24:21 by yooi              #+#    #+#              #
#    Updated: 2016/08/28 21:38:52 by yooi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
FLAG = -Wall -Werror -Wextra
HEADER = -I ./includes/
RUSH_00_SRC = ./rush00/rush00_main.c ./srcs/ft_putchar.c

PRINT_SRC0 = ./rush00/rush00.c
PRINT_SRC1 = ./rush00/rush01.c
PRINT_SRC2 = ./rush00/rush02.c
PRINT_SRC3 = ./rush00/rush03.c
PRINT_SRC4 = ./rush00/rush04.c

EXEC_NAME0 = rush-00
EXEC_NAME1 = rush-01
EXEC_NAME2 = rush-02
EXEC_NAME3 = rush-03
EXEC_NAME4 = rush-04
EXEC_NAMES = rush-00 rush-01 rush-02 rush-03 rush-04

RUSH_02_SRC = ./srcs/counter_adj.c \
		   ./srcs/ft_putnbr.c \
		   ./srcs/ft_strcmp.c \
		   ./srcs/read_input.c \
		   ./srcs/rush01_map.c \
		   ./srcs/rush03_map.c \
		   ./srcs/rushcmp.c \
		   ./srcs/ft_putchar.c \
		   ./srcs/ft_putstr.c \
		   ./srcs/gen_result.c \
		   ./srcs/rush00_map.c \
		   ./srcs/rush02_map.c \
		   ./srcs/rush04_map.c \
		   ./srcs/main.c

all: $(NAME)

$(NAME):
	@gcc $(HEADER) $(FLAG) $(RUSH_02_SRC) -o $(NAME)
	@gcc $(HEADER) $(FLAG) $(RUSH_00_SRC) $(PRINT_SRC0) -o $(EXEC_NAME0)
	@gcc $(HEADER) $(FLAG) $(RUSH_00_SRC) $(PRINT_SRC1) -o $(EXEC_NAME1)
	@gcc $(HEADER) $(FLAG) $(RUSH_00_SRC) $(PRINT_SRC2) -o $(EXEC_NAME2)
	@gcc $(HEADER) $(FLAG) $(RUSH_00_SRC) $(PRINT_SRC3) -o $(EXEC_NAME3)
	@gcc $(HEADER) $(FLAG) $(RUSH_00_SRC) $(PRINT_SRC4) -o $(EXEC_NAME4)
	@echo "make success."

clean:
	@/bin/rm -f $(EXEC_NAMES)
	@echo "clean success."

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "fclean success."

re: fclean all
