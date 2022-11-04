NAME = account
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -g -fsanitize=address -Wall -Wextra -std=c++98 -pedantic
CC = c++
INCLUDES = Account.hpp

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