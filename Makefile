# -*- Makefile -*-i
#
#  target: dependencies
#  		action

NAME = libft.a
SRC =  ./libc/*.c
OBJ = ./obj

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	mv *.o $(OBJ)
	ar -cvq $(NAME) $(OBJ)/*.o

clean:
	rm -f *.a  

fclean: clean
	rm -f $(OBJ)/*.o

re: fclean all