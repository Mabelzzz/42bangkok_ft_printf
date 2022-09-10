#include "ft_printf.h"
NAME = libft/libft.a
FLAGS = -Wall -Werror -Wextra
SRCS = 
	ft_printf.c \
	convert.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_itoa.c \

OBJS = $(SRCS:.c=.o)

%o: %c
	gcc $(FLAGS) -c $< -o $@

all: $(NAME)
	
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME) 

re:	fclean all

.PHONY:	bonus clean fclean all re 
