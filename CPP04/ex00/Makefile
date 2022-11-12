NAME = animal
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Wrong/WrongAnimal.cpp Wrong/WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -std=c++98 -pedantic
CC = c++
INCLUDES = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.cpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(FLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $^ $(FLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

debug: all
	./animal

re: fclean all