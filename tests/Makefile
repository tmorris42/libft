SRCS		= \
	test_ft_abs.c


ifeq ($(MAKELEVEL), 0)
CC			?=	clang
endif
CFLAGS		= 	-Wall -Wextra -Werror
INCLUDES	=	-I../includes/
LIBFT		=	../libft.a
OBJ_DIR		=	target/
SRC_DIR		=	srcs/
OBJS		=	${addprefix $(OBJ_DIR), ${SRCS:.c=.out}}

all: $(OBJS)

$(OBJ_DIR):
	mkdir $(OBJ_DIR);

$(OBJS): $(OBJ_DIR)%.out: $(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) $< $(LIBFT) -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean:		clean

re:			fclean all

test: all
	@python3 test.py

debug: all
	@python3 test.py verbose

.PHONY:		all re clean fclean test debug
