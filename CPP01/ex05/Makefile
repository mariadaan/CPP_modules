NAME = harl
SRCS = Harl.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -g -fsanitize=address -Wall -Wextra -std=c++98 -pedantic
CC = c++
INCLUDES = Harl.hpp

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
	./account

re: fclean all