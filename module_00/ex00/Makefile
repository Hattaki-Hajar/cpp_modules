SRCS	= megaphone.cpp

CC		= c++

CFLAGS	= -Werror -Wextra -Wall -std=c++98

NAME	= megaphone

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