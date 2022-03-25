NAME		= libft.a

SRCS		= \
				ft_abs.c \
				ft_atoi.c \
				ft_atol.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isempty.c \
				ft_islower.c \
				ft_isprint.c \
				ft_isspace.c \
				ft_isupper.c \
				ft_itoa.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstremove_next.c \
				ft_lstsize.c \
				ft_max.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
                ft_memset.c \
				ft_min.c \
				ft_putchar.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putint_fd.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strcmp.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strndup.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				get_next_line.c \
				get_next_line_utils.c \


ifeq ($(MAKELEVEL), 0)
CC			=	clang
endif
CFLAGS		= 	-c -Wall -Wextra -Werror
INCLUDES	=	-Iincludes
OBJ_DIR		=	objs/
SRC_DIR		=	./srcs/
OBJS		=	${addprefix $(OBJ_DIR), ${SRCS:.c=.o}}

all: $(NAME)

$(OBJ_DIR):
	mkdir $(OBJ_DIR);

$(OBJS): $(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -rf $(OBJ_DIR)

fclean:		clean
	rm -rf $(NAME)

re:			fclean all

test: $(NAME)
	@$(MAKE) test -sC tests

debug: $(NAME)
	@$(MAKE) debug -sC tests

.PHONY:		all re clean fclean test debug
