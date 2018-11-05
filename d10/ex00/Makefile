# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lskrauci <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2018/10/08 13:15:27 by lskrauci      #+#    #+#                  #
#    Updated: 2018/10/08 20:12:40 by lskrauci      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/ft_putchar.c ./srcs/ft_putstr.c \
	   ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = ./includes/

all: $(NAME)

$(NAME): 
	gcc -c $(SRCS) -I$(INCLUDES)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean:	clean
	rm -f $(NAME)

re:	fclean all
