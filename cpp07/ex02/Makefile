FLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDE = -I .

SRCS =	main.cpp

NAME = Array

OBJECTS = $(SRCS:.cpp=.o)

COMPILER = c++

all: $(NAME)

$(NAME): $(OBJECTS)
	$(COMPILER) $(FLAGS) $(INCLUDE) $(OBJECTS) -o $(NAME)
	@echo "Executable ./$(NAME)"

%.o: %.cpp
	$(COMPILER) $(FLAGS) $(INCLUDE) -c $< -o $@

clean:
	@/bin/rm -f $(OBJECTS)
	@echo "Removed O-FILES"

fclean: clean 
	@/bin/rm -f $(NAME)
	@echo "Removed Executable file"

re: fclean all

.PHONY: all clean fclean re
