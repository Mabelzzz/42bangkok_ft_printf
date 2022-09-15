NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
SRCS = 	convert.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_itoa_un.c \
		ft_itoa.c \
		ft_printf.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_toupper.c 

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
