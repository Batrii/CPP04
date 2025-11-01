CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp AMateria.cpp IMateriaSource.cpp ICharacter.cpp
OBJS = $(SRCS:.cpp=.o)

NAME = ex03

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all