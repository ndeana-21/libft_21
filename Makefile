# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 14:32:17 by ndeana            #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2020/06/04 03:09:17 by ndeana           ###   ########.fr        #
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
			src/ft_lstdelone.c

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
		@echo remove ${OBJ}
		@${RM} ${DFILE}
		@echo remove ${DFILE}

fclean:	clean
		@${RM} ${NAME}
		@echo remove ${NAME}

# so:
# 		@${CC} -c  -fPIC src/ft_*c -MD
# 		@${CC} -shared -o ${NAME:.a=.so} src/ft_*.o
# 		@echo Make SO file

re:		fclean all

.PHONY: all bonus clean fclean re
=======
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
>>>>>>> e15a6a1f2ff6715d53216f41ef03771b8c0b13cb
