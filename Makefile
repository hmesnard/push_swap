NAME		=	push_swap

SRCS		=	push_swap.c \
				check_error.c \
				hardcode.c \
				sort.c \
				sort_bit.c \
				actions1.c \
				actions2.c \
				actions3.c \
				actions4.c \
				utils.c

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(CC) -o $@ $^

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
