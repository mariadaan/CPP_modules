NAME = mysed
SRCS = main.cpp sed.cpp
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
	rm -f *.replace

recept: all
	./mysed recept olijfolie zonnebloemolie

boter: all
	./mysed recept olijfolie boter

nieuws: all
	./mysed nieuws "." "!"

re: fclean all