NAME	= materia

CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

SRCS	= main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp Floor.cpp
OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp ICharacter.hpp AMateria.hpp IMateriaSource.hpp Character.hpp Ice.hpp Cure.hpp MateriaSource.hpp Floor.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
