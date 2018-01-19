# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile9                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/23 17:18:42 by manki             #+#    #+#              #
#    Updated: 2018/01/19 14:28:34 by manki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op

SRCS += main09.c
SRCS += ft_basic.c
SRCS += ft_operator9.c
SRCS += ft_usage.c

OBJS += main09.o
OBJS += ft_basic.o
OBJS += ft_operator9.o
OBJS += ft_usage.o

all: $(NAME)

$(OBJS):
	gcc -c $(SRCS)

$(NAME): $(OBJS)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJS)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
