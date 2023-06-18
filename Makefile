# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricguerr <ricguerr@student.42adel.org.au>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 14:58:14 by ricguerr          #+#    #+#              #
#    Updated: 2023/06/18 22:13:10 by ricguerr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = .
OBJDIR = obj

# # Source files and object files
# SRCS =	ft_strlen.c \
# 		ft_isdigit.c \
# 		ft_atoi.c \
# 		ft_bzero.c \
# 		ft_calloc.c \
# 		ft_isalnum.c \
# 		ft_isalpha.c \
# 		ft_isascii.c \
# 		ft_isprint.c \
# 		ft_memchr.c \
# 		ft_memcmp.c \
# 		ft_memcpy.c \
# 		ft_memmove.c \
# 		ft_memset.c \
# 		ft_strchr.c \
# 		ft_strdup.c \
# 		ft_strlcat.c \
# 		ft_strlcpy.c \
# 		ft_strlen.c \
# 		ft_strncmp.c \
# 		ft_strnstr.c \
# 		ft_strrchr.c \
# 		ft_tolower.c \
# 		ft_toupper.c \
# 		ft_substr.c \
# 		ft_strjoin.c \
# 		ft_strtrim.c \
# 		ft_split.c \
# 		ft_itoa.c \
# 		ft_strmapi.c \
# 		ft_striteri.c \
# 		ft_putchar_fd.c \
# 		ft_putstr_fd.c \
# 		ft_putendl_fd.c \
# 		ft_putnbr_fd.c \

# BSRCS = ft_lstnew.c \
        # ft_lstadd_front.c \
        # ft_lstsize.c \
        # ft_lstlast.c \
        # ft_lstadd_back.c \
        # ft_lstdelone.c  \
        # ft_lstclear.c \
        # ft_lstiter.c \
        # ft_lstmap.c \

# The below build source list with all .c files
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))
# BOBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(BSRCS))

# Library name and output
NAME = libft.a

# Default target
all: $(NAME)

# Rule for building object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule for building the library
$(NAME): $(OBJS)
	ar rs $@ $(OBJS)

# Rule for ensuring obj folder existance
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Clean rule
clean:
	rm -rf $(OBJDIR)

# Full clean rule
fclean: clean
	rm -rf $(NAME)

# Rebuild rule
re: fclean all

# Add bonus functions to the library
# bonus: $(BOBJS) $(NAME)
	# ar rs $(NAME) $(BOBJS)

# Phony targets
.PHONY: all fclean clean re
