

NAME = libftprintf.a
LIBFT = libft.a

SRC = src/ft_printf.c src/ft_int_conv.c src/ft_str_conv.c\
		src/ft_char_conv.c src/ft_hexa_conv.c

OBJS = $(SRC:.c=.o)

LIBFTPATH = ./libft/

FLAGS = -Wall -Wextra -Werror

CC = clang

all: $(NAME)

$(NAME): $(OBJS) $(LIBFTPATH)
	@echo making library...
	@make -C $(LIBFTPATH) $(LIBFT)
	@cp -r $(LIBFTPATH)$(LIBFT) .
	@mv $(LIBFT) $(NAME)
	@echo joining printf in the library...
	@ar -rcs $(NAME) $(OBJS)
	@echo library all done!

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
