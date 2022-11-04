NAME = weapons
SRCS = main.cpp Weapon.cpp HumanB.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -std=c++98 -pedantic
CC = c++
INCLUDES = Weapon.hpp HumanB.hpp

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
	./weapons

re: fclean all