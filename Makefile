# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmorris <tmorris@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 13:33:17 by tmorris           #+#    #+#              #
#    Updated: 2020/12/27 18:28:01 by tmorris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	   ft_memchr.c ft_memcmp.c ft_strlen.c ft_strchr.c ft_strncmp.c \
	   ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
	   ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	   ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_strmapi.c \
	   ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_substr.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_putchar.c ft_putstr.c ft_putnbr.c

OBJS = ${SRCS:.c=.o}

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c \
		gnl/get_next_line.c gnl/get_next_line_utils.c \
		ft_printf/ft_printf.c ft_printf/flags.c \
		ft_printf/ft_printf_utils.c \
		ft_printf/ft_conversion_c.c \
		ft_printf/ft_conversion_d.c \
		ft_printf/ft_conversion_s.c \
		ft_printf/ft_conversion_p.c \
		ft_printf/ft_conversion_u.c \
		ft_printf/ft_conversion_x.c \
		ft_putint_fd.c \

BONUSOBJS = ${BONUS:.c=.o}

all: $(NAME)

$(OBJS): %.o: %.c
	gcc -c -Wall -Wextra -Werror $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) $(BONUSOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(BONUSOBJS): %.o:%.c
	gcc -c -Wall -Wextra -Werror $< -o $@

bonus: $(OBJS) $(BONUSOBJS)
	rm -f $(NAME)
	ar rcs $(NAME) $(OBJS) $(BONUSOBJS)

.PHONY: all re clean fclean bonus
