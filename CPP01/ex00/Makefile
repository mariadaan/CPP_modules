NAME = zombie
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -std=c++98 -pedantic
CC = c++
INCLUDES = Zombie.hpp

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
	./zombie

re: fclean all