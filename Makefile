# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aburnott <aburnott@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 16:25:55 by aburnott          #+#    #+#              #
#    Updated: 2022/10/10 18:10:52 by aburnott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
		ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

B_SRCS = ft_lstnew_bonus.c

OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus:	$(OBJS) $(B_OBJS)
	ar -rcs $(NAME) $(B_OBJS)

%.o: %.c
	gcc -c $(CFLAGS) $?

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all bonus clean fclean re