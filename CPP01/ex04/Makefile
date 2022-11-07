NAME = mysed
SRCS = main.cpp sed.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
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

nofile: all
	./mysed nofile blabla blablaaa

nostr: all
	./mysed recept "" blablaaa

noargs: all
	./mysed

toomanyargs: all
	./mysed recept olijfolie boter jaa jaaaa

re: fclean all