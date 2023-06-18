# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricguerr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 14:58:14 by ricguerr          #+#    #+#              #
#    Updated: 2023/05/15 15:13:28 by ricguerr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRCDIR = .
OBJDIR = obj

# Source files and object files
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

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

# Phony targets
.PHONY: all fclean clean re
