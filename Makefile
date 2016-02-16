# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmohr <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/04 01:32:52 by tmohr             #+#    #+#              #
#    Updated: 2016/02/13 18:43:32 by ghery            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	get_next_line

CC		=	gcc

SRCS	=	get_next_line.c

OBJECTS	=	get_next_line.o

LIB		=	get_next_line.h

LIBNAME	=	get_next_line.a

LIBS	=	get_next_line.a libft/libft.a

FLAG	=	-Wall -Wextra -Werror

RM		=	rm -f

CLEAN	=	clean

all		:	$(NAME)

$(NAME)	:	$(OBJECTS)
			make -C libft
			$(CC) $(FLAG) -c -I $(LIB) $(SRCS)
			ar rc $(LIBNAME) $(OBJECTS)
			$(CC) $(FLAG) -o $(NAME) main.c $(LIBS)
clean	:	
			$(RM) $(OBJECTS)

fclean	:	clean
			make -C libft/ fclean
			$(RM) $(NAME) get_next_line.a

re		:	fclean all
