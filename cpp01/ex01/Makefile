FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDE = -I .

SRCS =  Zombie.cpp \
		zombieHorde.cpp \
		main.cpp

NAME = Zombie

OBJECT = $(SRCS:.cpp=.o)

COMPILER = c++


all: $(NAME)

$(NAME): $(OBJECT)
	@echo "Compiling..."
	$(COMPILER) $(FLAGS) $(INCLUDE) $(SRCS) -o $(NAME)
	@echo "Executable ./$(NAME)"

clean:
	@/bin/rm -f $(OBJECT)
	@echo "Removed O-FILES"

fclean: clean 
	@/bin/rm -f $(NAME)
	@echo "Removed Executable file"

re: fclean all

.PHONY: all clean fclean re
