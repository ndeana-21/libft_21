# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 14:32:17 by ndeana            #+#    #+#              #
#    Updated: 2020/06/30 03:34:29 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#								  Lib										   #
# **************************************************************************** #

SRC 	=	ft_memset.c				ft_bzero.c				ft_memcpy.c			\
			ft_memmove.c			ft_memchr.c				ft_memcmp.c			\
			ft_strlcpy.c			ft_strlcat.c			ft_strchr.c			\
			ft_strnstr.c			ft_strncmp.c			ft_atoi.c			\
			ft_isdigit.c			ft_isalnum.c			ft_isascii.c		\
			ft_toupper.c			ft_tolower.c			ft_calloc.c			\
			ft_substr.c				ft_strjoin.c			ft_strtrim.c		\
			ft_itoa.c				ft_strmapi.c			ft_putchar_fd.c		\
			ft_putendl_fd.c			ft_putnbr_fd.c			ft_lstadd_back.c	\
			ft_lstiter.c			ft_lstmap.c				ft_lstsize.c		\
			ft_lstadd_front.c		ft_lstlast.c			ft_lstnew.c			\
			ft_memccpy.c			ft_strlen.c				ft_strrchr.c		\
			ft_isalpha.c			ft_isprint.c			ft_strdup.c			\
			ft_split.c				ft_putstr_fd.c			ft_lstclear.c		\
			ft_lstdelone.c			ft_printf.c									\
			ft_minmax_bonus.c		ft_strrev_bonus.c		ft_sqrt_bonus.c		\
			ft_pow_bonus.c			ft_invsqrt_bonus.c		ft_numsys_bonus.c	\
			ft_bit_to_dex_bonus.c

OBJ		= $(SRC:.c=.o)
# DFILE	= $(SRC:.c=.d)
# SRCDIR	= src
# OBJDIR	= obj
# SRCS	= $(addprefix $(SRCDIR)/, $(SRC))
# OBJS	= $(addprefix $(OBJDIR)/, $(OBJ))
# DFILES	= $(addprefix $(OBJDIR)/, $(DFILE))

NAME	= libft.a
HEADER	= -I includes
CC		= gcc
CF		= -g -c -Wall -Wextra -Werror

.PHONY: all clean fclean bonus re norm main 

.c.o:
		@$(CC) $(CF) $< $(HEADER)
		@$(PRINT) $(PBOLD)$(FGREEN)COMPILE:$(PDBOLD) $< $(PNULL)

all:	loader $(NAME)

$(NAME): $(OBJ)
		@ar -rcs $@ $^
		@ranlib $@
		@$(PRINT) \\n$(PBOLD)$(FMAGENTA)MAKE: $(PDBOLD)$(NAME)$(PNULL)\\n

clean: loader
		@$(PRINT) $(addprefix \\n$(PNULL)$(PBOLD)$(FYELLOW)REMOVE:$(PDBOLD) , $(OBJ))
		@rm -f $(OBJ)
		@sleep 0.5

fclean: clean
		@$(PRINT) \\n$(PNULL)$(PBOLD)$(FYELLOW)REMOVE: $(PDBOLD)$(NAME)$(PNULL)\\n
		@rm -f $(NAME)
		@sleep 1

# so:
# 		@$(CC) -c  -fPIC ft_*c -MD
# 		@$(CC) -shared -o $(NAME:.a=.so) ft_*.o
# 		@echo Make SO file

re:		fclean all


# **************************************************************************** #
#								Utilits										   #
# **************************************************************************** #


# Цвета шрифта
FBLACK		= '\033[30m'
FRED		= '\033[31m'
FGREEN		= '\033[32m'
FYELLOW		= '\033[33m'
FBLUE		= '\033[34m'
FMAGENTA	= '\033[35m'
FCYAN		= '\033[36m'
FGREY		= '\033[37m'

# Цвета фона
BGBLACK		= '\033[40m'
BGRED		= '\033[41m'
BGGREEN		= '\033[42m'
BGYELLOW	= '\033[43m'
BGBLUE		= '\033[44m'
BGMAGENTA	= '\033[45m'
BGCYAN		= '\033[46m'
BGGREY		= '\033[47m'

# Свойства текста
PBOLD		= '\033[1m'#	жирный шрифт
PDBOLD		= '\033[2m'#	полу яркий цвет
PNBOLD		= '\033[22m'#	нормальная интенсивность
PUNDERLINE	= '\033[4m'#	подчеркивание
PBLINK		= '\033[5m'#	мигание
PINVERSE	= '\033[7m'#	инверсия
PNULL		= '\033[0m'#	отмена

PRINT		= echo -e

norm:
		@norminette $(SRC)

main: $(OBJ)
		@$(CC) $(CF) main.c $(NAME) -I /
		@$(PRINT)

loader:
		@clear
		@$(PRINT) $(PNULL)$(FMAGENTA)
		@echo -ne '\n|                    |   (0%)\r'
		@sleep 0.2
		@echo -ne '|##                  |   (10%)\r'
		@sleep 0.3
		@echo -ne '|###                 |   (15%)\r'
		@sleep 0.1
		@echo -ne '|#####               |   (25%)\r'
		@sleep 0.5
		@echo -ne '|##########          |   (50%)\r'
		@sleep 0.3
		@echo -ne '|################    |   (80%)\r'
		@sleep 0.5
		@echo -ne '|####################|   (100%)\r'
		@sleep 1
		@echo -ne '\n'
		@$(PRINT) $(PNULL)
		@clear