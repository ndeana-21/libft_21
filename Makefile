# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndeana <ndeana@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 14:32:17 by ndeana            #+#    #+#              #
#    Updated: 2020/05/25 11:43:04 by ndeana           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew \
		ft_lstadd_front \
		ft_lstsize \
		ft_lstlast \
		ft_lstadd_back \
		ft_lstdelone \
		ft_lstclear \
		ft_lstiter \
		ft_lstmap 
OBJ = $(SRC:.c=.o)

# BONUSSRC =	ft_lstadd_back.c \
# 			ft_lstclear.c \
# 			ft_lstiter.c \
# 			ft_lstmap.c \
# 			ft_lstsize.c \
# 			ft_lstadd_front.c \
# 			ft_lstdelone.c \
# 			ft_lstlast.c \
# 			ft_lstnew.c
# BONUSOBJ = $(BONUSSRC:.c=.o)





NAME = libft.a
INCLUDES = ./
FLAG = -Wall -Wextra -Werror

all: $(NAME)

# %.o: %.c $(INCLUDES)
# 	@gcc $(FLAGS) $< -o $@

$(NAME): $(SRCS) libft.h
	@gcc $(FLAG) -I$(INCLUDES) $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
