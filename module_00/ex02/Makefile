SRCS	= $(wildcard *.cpp)

CC		= c++

CFLAGS	= -Werror -Wextra

NAME	= Account

OBJS	= $(SRCS:.cpp=.o)

MK_FILE	= Makefile

.c.o	:
			$(CC) $(CFLAGS) -o $@ -c $<

all		: $(NAME)

$(NAME)	: $(OBJS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re		: fclean all