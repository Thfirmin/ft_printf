# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                          :+:     :+:             #
#                                                     +:+ +:+         +:+      #
#    By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 14:23:56 by thfirmin          #+#    #+#              #
#    Updated: 2022/10/13 20:58:19 by Thinotsuki   ###     ###.br               #
#                                                                              #
# **************************************************************************** #

# +>                                     NAMES 

NAME	= libft.a
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    SOURCES 

SRCS	= ft_atoi.c       \
		  ft_bzero.c      \
		  ft_calloc.c     \
		  ft_isalnum.c    \
		  ft_isalpha.c    \
		  ft_isascii.c    \
		  ft_isdigit.c    \
		  ft_isprint.c    \
		  ft_memchr.c     \
		  ft_memcmp.c     \
		  ft_memcpy.c     \
		  ft_memmove.c    \
		  ft_memset.c     \
		  ft_strchr.c     \
		  ft_strdup.c     \
		  ft_strlcat.c    \
		  ft_strlcpy.c    \
		  ft_strlen.c     \
		  ft_strncmp.c    \
		  ft_strnstr.c    \
		  ft_strrchr.c    \
		  ft_tolower.c    \
		  ft_toupper.c    \
		  ft_substr.c     \
		  ft_strjoin.c    \
		  ft_strtrim.c    \
		  ft_split.c      \
		  ft_itoa.c       \
		  ft_strmapi.c    \
		  ft_striteri.c   \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c  \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c

BN_SRCS	= ft_lstadd_back_bonus.c  \
		  ft_lstclear_bonus.c     \
		  ft_lstiter_bonus.c      \
		  ft_lstmap_bonus.c       \
		  ft_lstsize_bonus.c      \
		  ft_lstadd_front_bonus.c \
		  ft_lstdelone_bonus.c    \
		  ft_lstnew_bonus.c       \
		  ft_lstlast_bonus.c

OBJS	= $(SRCS:.c=.o)

BN_OBJS	= $(subst .c,.o,$(BN_SRCS))
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES 

CC		= cc
AR		= ar rcs
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror -g
BN_OBJSRC = $(subst .o,.c,$@)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     CODES 

BLANK			= \e[m
RED				= \e[38;5;9m
YELLOW			= \e[38;5;11m
GREEN			= \e[38;5;2m
BLUE			= \e[38;5;6m
PURPLE			= \e[38;5;5m
PINK			= \e[38;5;13m
WHITE			= \e[38;5;15m

STRONG			= \e[1m
SHADOW			= \e[2m
ITALIC			= \e[3m
UNDLINE			= \e[4m
UPPLINE			= \e[53m
DUNDLINE		= \e[21m
CENSORED		= \e[9m
UPALIGN			= \e[73m
DWALIGN			= \e[74m
FULLER			= \e[7m
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES 

all:		$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

bonus:	all $(BN_OBJS)

.ONESHELL:
$(BN_OBJS): $(BN_SRCS)
	@if [ "$(BN_OBJSRC)" == "$(findstring $(BN_OBJSRC),$?)" ]; then
		echo "$(CC) $(CFLAGS) -c $*.c -o $@";
		$(CC) $(CFLAGS) -c $*.c -o $@; 
	else 
		touch $@; 
	fi
	@if [ "$@" == "$(lastword $(BN_OBJS))" ]; then 
		echo "$(AR) $(NAME) $(BN_OBJS)"; 
		$(AR) $(NAME) $(BN_OBJS); 
	fi

mclean:
ifneq (,$(shell ls $(OBJS) 2> /dev/null))
	$(RM) $(OBJS)
endif

bclean:
ifneq (,$(shell ls $(BN_OBJS) 2> /dev/null))
	$(RM) $(BN_OBJS)
endif

clean: 		mclean bclean

fclean:		clean
ifneq (,$(shell ls $(NAME) 2> /dev/null))
	$(RM) $(NAME)
endif

re:			fclean all

bre:		fclean bonus


.PHONY:		all bonus mclean bclean clean fclean re bre
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# vim: fdm=marker fmr=+>,<+ ts=4 sw=4 nofen noet:
