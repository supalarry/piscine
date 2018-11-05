#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pholster <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2018/10/08 15:33:57 by pholster      #+#    #+#                  #
#    Updated: 2018/10/08 15:33:57 by pholster      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

#norminette $(find . -name "*.c" && find . -name "*.h")
NAME = colle-2
INC = ./includes/
SRCS = ./srcs/
VPATH = $(SRCS)
GITADD = $(NAME:-2=_2).c $(INC)ft_prototypes.h Makefile input.c utilty.c \
	patterns.c dimensions.c cmp.c
FILES = $(NAME:-2=_2).c input.c utilty.c patterns.c dimensions.c cmp.c

all: $(NAME)

$(NAME): $(FILES)
	@gcc -Wall -Werror -Wextra -I$(INC) -o $(NAME) $^;

git: $(GITADD)
ifndef MSG
	$(error Aborting git due to empty commit message.)
endif
	@git add $^;
	@git commit -m "$(MSG)";
	@git push;

clean:

fclean: clean
	rm -f $(NAME);

re: fclean all
