# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 14:32:17 by ndeana            #+#    #+#              #
#    Updated: 2020/11/04 13:55:09 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	=	ft_memset.c			ft_bzero.c			ft_memcpy.c			ft_memccpy.c	\
			ft_memmove.c		ft_memchr.c			ft_memcmp.c			ft_strlen.c		\
			ft_strlcpy.c		ft_strlcat.c		ft_strchr.c			ft_strrchr.c	\
			ft_strnstr.c		ft_strncmp.c		ft_atoi.c			ft_isalpha.c	\
			ft_isdigit.c		ft_isalnum.c		ft_isascii.c		ft_isprint.c	\
			ft_toupper.c		ft_tolower.c		ft_calloc.c			ft_strdup.c		\
			ft_substr.c			ft_strjoin.c		ft_strtrim.c		ft_split.c		\
			ft_itoa.c			ft_strmapi.c		ft_putchar_fd.c		ft_putstr_fd.c	\
			ft_putendl_fd.c		ft_putnbr_fd.c		ft_get_next_line.c	ft_math.c		\
			ft_lstadd_back.c	ft_lstclear.c		ft_lstiter.c		ft_lstmap.c		\
			ft_lstsize.c		ft_lstadd_front.c	ft_lstdelone.c		ft_lstlast.c	\
			ft_lstnew.c			ft_double_arr.c		ft_read_fd.c		ft_strmatch.c	\
			

NAME	= libft.a
OBJ_DIR	= obj
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_DIR)/, $(OBJ))
INCLUDES= ./
CC		= clang
CF		= -Wall -Wextra -Werror
RM		= rm -rf
.PHONY: all clean fclean re norme

.c.o:
	@${CC} ${CF} -g -c $< -o ${<:.c=.o}
	@$(PRINT) "\r$(FGREEN)COMPILE: $<            $(PNULL)"

$(NAME): ${OBJ} libft.h
	@ar rcs ${NAME} ${OBJ}
	@$(PRINT) "\r$(FGREEN)MAKE: ${NAME}              $(PNULL)\n"

all:	${NAME}

clean:
	@${RM} ${OBJ}
	@$(PRINT) "$(addprefix \n$(FRED)REMOVE: $(FYELLOW), $(SRC:.c=.o))$(PNULL)"

fclean:	clean
	@${RM} ${NAME}
	@$(PRINT) "\n$(FRED)REMOVE: $(FYELLOW)$(NAME)$(PNULL)"

norme:
	@norminette $(SRC) libft.h | awk '{sub(/Norme/,"$(FGREEN)Norme$(PNULL)")}1' | awk '{sub(/Error/,"$(FRED)Error$(PNULL)")}1'

re:		fclean all

# **************************************************************************** #
#								Utilits										   #
# **************************************************************************** #


# Цвета шрифта
FBLACK		= \033[30m
FRED		= \033[31m
FGREEN		= \033[32m
FYELLOW		= \033[33m
FBLUE		= \033[34m
FMAGENTA	= \033[35m
FCYAN		= \033[36m
FGREY		= \033[37m

# Цвета фона
BGBLACK		= \033[40m
BGRED		= \033[41m
BGGREEN		= \033[42m
BGYELLOW	= \033[43m
BGBLUE		= \033[44m
BGMAGENTA	= \033[45m
BGCYAN		= \033[46m
BGGREY		= \033[47m

# Свойства текста
PBOLD		= \033[1m#	жирный шрифт
PDBOLD		= \033[2m#	полу яркий цвет
PNBOLD		= \033[22m#	нормальная интенсивность
PUNDERLINE	= \033[4m#	подчеркивание
PBLINK		= \033[5m#	мигание
PINVERSE	= \033[7m#	инверсия
PNULL		= \033[0m#	отмена

PRINT		= printf 