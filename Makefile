# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 19:49:42 by vfiszbin          #+#    #+#              #
#    Updated: 2021/11/29 20:17:35 by vfiszbin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	ft_isdigit.c\
		ft_isalpha.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_substr.c\
		ft_strlcpy.c\
		ft_strlcat.c\

OBJS = ${SRCS:.c=.o}

NAME = libft.a

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $ $< -o ${<:.c=.o}

HEADER = libft.h

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

###Pour tester sur Ubuntu, à RETIRER !!!!!!!!!!!!!!!!
#so:
#	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
#	gcc -nostartfiles -shared -o libft.so $(OBJS)
###

.PHONY: all clean fclean re