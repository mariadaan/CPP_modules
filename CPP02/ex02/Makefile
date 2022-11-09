NAME = fixed
SRCS =	main.cpp				\
		Fixed.cpp				\
		ComparisonOperators.cpp	\
		ArethmeticOperators.cpp	\
		IncrementOperators.cpp	\
		FixedMembers.cpp

OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
CC = c++
INCLUDES = Fixed.hpp

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
	./fixed

re: fclean all