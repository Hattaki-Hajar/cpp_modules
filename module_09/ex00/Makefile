SRCS	= $(wildcard *.cpp)

CC		= c++

CFLAGS	= -Werror -Wextra -Wall -std=c++98 -fsanitize=address -g3

NAME	= btc

OBJS	= $(SRCS:.cpp=.o)

HEADERS	= $(wildcard *.hpp)

.cpp.o	:
			$(CC) $(CFLAGS) -o $@ -c $<

all		: $(NAME)

$(NAME)	: $(OBJS) $(HEADERS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	: clean
		rm -rf $(NAME)

re		: fclean all
