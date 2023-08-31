FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Megaphone

SRC = Megaphone.cpp

OBJECT = $(SRC:.cpp=.o)

COMPILER = c++

all: $(NAME)

%.o: %.cpp
	@echo "Compiling..."
	@$(COMPILER) $(FLAGS) -c $< -o $@


$(NAME): $(OBJECT)
	@$(COMPILER) $(FLAGS) $(OBJECT) -o $(NAME)
	@echo "Executable ./$(NAME)"

clean:
	@/bin/rm -f $(OBJECT)
	@echo "Removed O-FILES"

fclean: clean 
	@/bin/rm -f $(NAME)
	@echo "Removed Executable file"

re: fclean all

.PHONY: all clean fclean re
