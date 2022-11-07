NAME = mysed
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -std=c++98 -pedantic
CC = c++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^ $(FLAGS)

%.o: %.cpp
	$(CC) -o $@ -c $^ $(FLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

recept: all
	./mysed recept olijfolie zonnebloemolie

nieuws: all
	./mysed nieuws "." "!"

re: fclean all