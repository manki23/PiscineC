# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: manki <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/21 15:50:13 by manki             #+#    #+#              #
#    Updated: 2017/07/24 13:31:35 by manki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRCS += srcs/ft_putchar.c 
SRCS += srcs/ft_putstr.c
SRCS += srcs/ft_strcmp.c
SRCS += srcs/ft_strlen.c
SRCS += srcs/ft_swap.c

OBJS += ft_putchar.o
OBJS += ft_putstr.o
OBJS += ft_strcmp.o
OBJS += ft_strlen.o
OBJS += ft_swap.o

HEADERS = ./includes

all: create_lib

$(OBJS):
	gcc -I $(HEADERS) -c $(SRCS) 

create_lib: $(OBJS)
	ar rc $(LIB) *.o
	ranlib $(LIB)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(LIB)

re: fclean all
