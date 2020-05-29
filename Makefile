# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 14:32:17 by ndeana            #+#    #+#              #
#    Updated: 2020/05/29 18:56:17 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =		ft_memset.c			ft_bzero.c			ft_memcpy.c			ft_memccpy.c	\
			ft_memmove.c		ft_memchr.c			ft_memcmp.c			ft_strlen.c		\
			ft_strlcpy.c		ft_strlcat.c		ft_strchr.c			ft_strrchr.c	\
			ft_strnstr.c		ft_strncmp.c		ft_atoi.c			ft_isalpha.c	\
			ft_isdigit.c		ft_isalnum.c		ft_isascii.c		ft_isprint.c	\
			ft_toupper.c		ft_tolower.c		ft_calloc.c			ft_strdup.c		\
			ft_substr.c			ft_strjoin.c		ft_strtrim.c		ft_split.c		\
			ft_itoa.c			ft_strmapi.c		ft_putchar_fd.c		ft_putstr_fd.c	\
			ft_putendl_fd.c		ft_putnbr_fd.c

BONUSSRC =	ft_lstadd_back.c	ft_lstclear.c		ft_lstiter.c		ft_lstmap.c		\
			ft_lstsize.c		ft_lstadd_front.c	ft_lstdelone.c		ft_lstlast.c	\
			ft_lstnew.c	


NAME	= libft.a
OBJ		= $(SRC:.c=.o)
OBJBONUS= $(BONUSSRC:.c=.o)
HEADER	= $(NAME:.a=.h)
INCLUDES= ./
CC		= gcc
CF		= -Wall -Wextra -Werror
RM		= rm -rf
.PHONY: all bonus clean fclean re

.c.o:
		@${CC} ${CF} -g -c $< -o ${<:.c=.o}
		@echo Compile - $<

$(NAME): ${OBJ}
		@ar rcs ${NAME} ${OBJ}
		@echo Make lib ${NAME}

bonus:	${OBJ} ${OBJBONUS}
		@ar rcs ${NAME} ${OBJ} ${OBJBONUS}
		@echo Make bonus lib ${NAME}

all:	${NAME}

clean:
		@${RM} ${OBJ} ${OBJBONUS}
		@echo remove objects

fclean:	clean
		@${RM} ${NAME}
		@echo remove ${NAME}

# so:
# 		@$(CC) -c -fPIC ft_*c
# 		@$(CC) -shared -o $(NAME:.a=.so) ft_*.o
# 		@echo Make SO file

re:		fclean all
