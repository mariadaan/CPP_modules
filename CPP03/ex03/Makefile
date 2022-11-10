NAME = diamondtrap
SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -pedantic
CC = c++
INCLUDES = ClapTrap.hpp ScavTrap.hpp DiamondTrap.hpp

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
	./diamondtrap

re: fclean all