NAME= materia
#INCLUDES= ./includes/*.hpp
SRCS= Character.cpp AMateria.cpp  Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) #$(INCLUDES) 
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "DONE ✅"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:clean all

.PHONY: all clean fclean re