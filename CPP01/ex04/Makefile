NAME = mysed
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -std=c++98 -pedantic
CC = c++
# INCLUDES = Weapon.hpp HumanB.hpp HumanA.hpp

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
	./mysed testtekst.txt olijfolie zonnebloemolie


re: fclean all