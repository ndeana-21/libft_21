# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 14:32:17 by ndeana            #+#    #+#              #
#    Updated: 2020/06/10 00:53:05 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	=	src/ft_memset.c			src/ft_bzero.c			src/ft_memcpy.c		\
			src/ft_memmove.c		src/ft_memchr.c			src/ft_memcmp.c		\
			src/ft_strlcpy.c		src/ft_strlcat.c		src/ft_strchr.c		\
			src/ft_strnstr.c		src/ft_strncmp.c		src/ft_atoi.c		\
			src/ft_isdigit.c		src/ft_isalnum.c		src/ft_isascii.c	\
			src/ft_toupper.c		src/ft_tolower.c		src/ft_calloc.c		\
			src/ft_substr.c			src/ft_strjoin.c		src/ft_strtrim.c	\
			src/ft_itoa.c			src/ft_strmapi.c		src/ft_putchar_fd.c	\
			src/ft_putendl_fd.c		src/ft_putnbr_fd.c		src/ft_lstadd_back.c\
			src/ft_lstiter.c		src/ft_lstmap.c			src/ft_lstsize.c	\
			src/ft_lstadd_front.c	src/ft_lstlast.c		src/ft_lstnew.c		\
			src/ft_memccpy.c		src/ft_strlen.c			src/ft_strrchr.c	\
			src/ft_isalpha.c		src/ft_isprint.c		src/ft_strdup.c		\
			src/ft_split.c			src/ft_putstr_fd.c		src/ft_lstclear.c	\
			src/ft_lstdelone.c		\
			src/ft_minmax_bonus.c	src/ft_strrev_bonus.c	src/ft_sqrt_bonus.c	\
			src/ft_pow_bonus.c		src/ft_invsqrt_bonus.c

OBJ		= $(SRC:.c=.o)
DFILE	= $(SRC:.c=.d)
NAME	= libft.a
HEADER	= libft.h
INCLUDES= ./includes
CF		= -Wall -Wextra -Werror

.c.o:
		@${CC} ${CF} -I$(INCLUDES) -g -c $< -o ${<:.c=.o} -MD
		@echo Compile - $<

$(NAME): ${OBJ}
		@ar rcs ${NAME} $?
		@echo Make lib ${NAME}

all:	${NAME}

clean:
		@${RM} ${OBJ}
		@echo remove OBJ
		@${RM} ${DFILE}
		@echo remove D-file

fclean:	clean
		@${RM} ${NAME}
		@echo remove ${NAME}

# so:
# 		@${CC} -c  -fPIC src/ft_*c -MD
# 		@${CC} -shared -o ${NAME:.a=.so} src/ft_*.o
# 		@echo Make SO file

re:		fclean all

.PHONY: all clean fclean re