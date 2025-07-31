NAME = bsq

SRCS = main.c	read_map.c	solve_map.c	utils.c
OBJS = $(SRCS:.c=.o)
HEADER = bsq.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re