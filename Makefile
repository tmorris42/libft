NAME		= libft.a

SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strchr.c \
			ft_strcmp.c ft_strncmp.c \
			ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
			ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_strmapi.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_substr.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_putchar.c ft_putstr.c ft_putnbr.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstremove_next.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c \
			get_next_line.c get_next_line_utils.c \
			ft_putint_fd.c \
			ft_max.c ft_min.c ft_abs.c \
			ft_atol.c \
			ft_strndup.c \
			ft_isupper.c ft_islower.c ft_isspace.c ft_isempty.c

CC			= 	clang
CFLAGS		= 	-c -Wall -Wextra -Werror 

OBJS		=	${SRCS:.c=.o}

all:		$(NAME)

$(OBJS):	%.o: %.c
			@${CC} $(CFLAGS) $< -o $@

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all


.PHONY:		all re clean fclean
