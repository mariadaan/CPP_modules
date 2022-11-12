NAME = animal
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -std=c++98 -pedantic
CC = c++
INCLUDES = Animal.hpp Cat.hpp Dog.hpp

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