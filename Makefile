NAME = minitalk
S_NAME = server
C_NAME = client
S_SRCS = server.c error.c
S_OBJS = $(S_SRCS:%.c=%.o)
C_SRCS = client.c error.c
C_OBJS = $(C_SRCS:%.c=%.o)
CC = cc
CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

$(NAME):$(S_NAME) $(C_NAME)

all:$(NAME)

$(S_NAME):$(S_OBJS)
	@$(MAKE) -s -C ./libft
	@$(MAKE) -s -C ./ft_printf
	@$(CC) $(CFLAGS) $(S_OBJS) ft_printf/libftprintf.a libft/libft.a -o $(S_NAME)

$(C_NAME):$(C_OBJS)
	@$(MAKE) -s -C ./libft
	@$(MAKE) -s -C ./ft_printf
	@$(CC) $(CFLAGS) $(C_OBJS) ft_printf/libftprintf.a libft/libft.a -o $(C_NAME)

clean:
	@$(MAKE)  -s -C ./libft clean
	@$(MAKE)  -s -C ./ft_printf clean
	rm -f $(C_OBJS)
	rm -f $(S_OBJS)

fclean:clean
	@$(MAKE)  -s -C ./libft fclean
	@$(MAKE)  -s -C ./ft_printf fclean
	rm -f $(S_NAME)
	rm -f $(C_NAME)

re: fclean all