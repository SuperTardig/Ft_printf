# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bperron <bperron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 12:43:05 by bperron           #+#    #+#              #
#    Updated: 2022/04/11 13:08:16 by bperron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Werror -Wall -Wextra
RM = rm -f
LIB = ar rcs

SRCS = ft_printf.c ft_printformatnbr.c ft_printformatchar.c #libft/Makefile

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS)

fclean:	clean 
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re