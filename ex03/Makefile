NAME = a.out
CPPFLAGS = -Wall -Wextra -Werror -std=c++17
SRC = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

all: $(NAME)

$(NAME): $(SRC) $(INC)
	c++ $(CPPFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
