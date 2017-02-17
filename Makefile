# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngouy <nathangouy@free.fr>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/23 10:24:35 by ngouy             #+#    #+#              #
#    Updated: 2017/02/17 18:42:59 by ngouy            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
NAME		= libft.a

SRC			= \
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_itoa.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c\
		\
		ft_putbin.c\
		ft_putbase.c\
		ft_put_strlist.c\
		ft_put_intlist.c\
		ft_pow.c\
		ft_is_prime.c\
		ft_join_free.c\
		ft_isblank.c\
		ft_isspace.c\
		ft_lstaddend.c\
		ft_lstlen.c\
		ft_put_str_array.c\
		ft_parse_args.c\
		ft_begin_with.c\

OBJ			= $(SRC:.c=.o)
CFLAGS		= -Wall
# CFLAGS		= -Wall -Werror -Wextra -ansi -pedantic
OFLAGS		= -O3

RM			= rm -rf

all: $(NAME)

$(NAME):
			gcc $(CFLAGS) -I. -c $(SRC)
			ar rc $(NAME) $(OBJ)
clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean re fclean
