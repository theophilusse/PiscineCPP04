NAME	= brain

CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
