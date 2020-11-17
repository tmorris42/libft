# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 13:33:17 by tmorris           #+#    #+#              #
#    Updated: 2020/11/17 18:55:00 by tmorris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	   ft_memchr.c ft_memcmp.c \
	   ft_strlen.c ft_strchr.c ft_strncmp.c ft_strrchr.c ft_strlcpy.c \
	   ft_strlcat.c ft_strnstr.c \
	   ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_toupper.c ft_tolower.c \
	   ft_calloc.c ft_strdup.c ft_strmapi.c ft_substr.c

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(OBJS): %.o: %.c
	clang -c -Wall -Wextra -Werror $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

SOBJS = ${SRCS:.c=.so}

$(SOBJS): %.so: %.c
	clang -fPIC -c $< -o $@

so: $(SOBJS)
	clang --shared -o libft.so $(SOBJS)

sclean: clean
	rm -f $(SOBJS)
