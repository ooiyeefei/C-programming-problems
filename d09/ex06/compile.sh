
norminette
# (!) no CheckForbiddenSourceHeader here!

gcc alloc_wrap.c ft_destroy.c main.c -Wall -Wextra -Werror -fsanitize=address -ldl -o bin
