NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
SRCS = 	check.c \
		convert_cs.c \
		convert_diu.c \
		convert_xp.c \
		ft_printf.c \
		ft_put_flag_pcs.c \
		ft_put_bonus.c \
		ft_put_condition.c \
		ft_put_fd.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_itoa_un.c \
		ft_itoa.c \
		ft_strjoin.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_atoi.c \

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

bonus: all

.PHONY:	bonus clean fclean all re 
