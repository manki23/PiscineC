# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/22 21:18:19 by manki             #+#    #+#              #
#    Updated: 2017/07/24 17:12:57 by manki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS += main.c
SRCS += ft_base.c
SRCS += ft_operators.c

OBJS += main.o
OBJS += ft_base.o
OBJS += ft_operators.o

all: $(NAME)

$(OBJS):
	gcc -c $(SRCS)

$(NAME): $(OBJS)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJS)

clean:
	@/bin/rm -f *.o

fclean:
	@/bin/rm -f $(NAME)

re: fclean all
