SRCS	= $(wildcard *.cpp)

CC		= g++

CFLAGS	= -Werror -Wextra -Wall -std=c++98

NAME	= Identifier

OBJS	= $(SRCS:.cpp=.o)

MK_FILE	= Makefile

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