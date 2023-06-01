SRCS	= $(wildcard *.cpp)

CC		= c++

CFLAGS	= -Werror -Wextra -Wall -std=c++98

NAME	= Brain

OBJS	= $(SRCS:.cpp=.o)

MK_FILE	= Makefile

HEADERS	= $(wildcard *.hpp)

.c.o	:
			$(CC) $(CFLAGS) -o $@ -c $<

all		: $(NAME)

$(NAME)	: $(OBJS) $(MK_FILE)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re		: fclean all