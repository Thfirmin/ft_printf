NAME	= libftprintf.a

LIBFT	= $(LIBFT_PATH)$(LIBFT_SRC)

SRCS	= ft_printf.c \
		  ft_puthex_fd.c \
		  ft_putunbr_fd.c

OBJS	= $(SRCS:.c=.o)

LIBFT_SRC	= libft.a

LIBFT_PATH	= libft/

CC	= cc
CFLAGS	= -Wall -Wextra -Werror -g
INCLUDE	= -Ilibft
MAKE	= make -C
RM	= rm -rf
AR	= ar rcs

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

all:	$(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) $(LIBFT_PATH)
	cp -v $(LIBFT) ./$(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(MAKE) $(LIBFT_PATH) clean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) $(LIBFT_PATH) fclean

re:	fclean all

.PHONY: all clean fclean re

