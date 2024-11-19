# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guiferre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 20:00:17 by guiferre          #+#    #+#              #
#    Updated: 2024/11/19 17:25:44 by guiferre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

NAME = libft.a
SOURCES = ft_atoi.c \
          ft_bzero.c \
          ft_calloc.c \
          ft_isalnum.c \
          ft_isalpha.c \
          ft_isascii.c \
          ft_isdigit.c \
          ft_isprint.c \
          ft_itoa.c \
          ft_memchr.c \
          ft_memcmp.c \
          ft_memcpy.c \
          ft_memmove.c \
          ft_memset.c \
          ft_putchar_fd.c \
          ft_putendl_fd.c \
          ft_putnbr_fd.c \
          ft_putstr_fd.c \
          ft_split.c \
          ft_strchr.c \
          ft_strdup.c \
          ft_striteri.c \
          ft_strjoin.c \
          ft_strlcat.c \
          ft_strlcpy.c \
          ft_strlen.c \
          ft_strmapi.c \
          ft_strncmp.c \
          ft_strnstr.c \
          ft_strrchr.c \
          ft_strtrim.c \
          ft_substr.c \
          ft_tolower.c \
          ft_toupper.c
OBJS = $(SOURCES:.c=.o)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all


.PHONY: all clean fclean re
