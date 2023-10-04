FLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDE = -I .

SRCS =  main.cpp \
		Harl.cpp

NAME = karen

OBJECT = $(SRCS:.cpp=.o)

COMPILER = c++

all: $(NAME)

$(NAME): $(OBJECT)
	@echo "Compiling..."
	$(COMPILER) $(FLAGS) $(INCLUDE) $(SRCS) -o $(NAME)
	@echo "\nExecutable: ./$(NAME) $$<level>"

clean:
	@/bin/rm -f $(OBJECT)
	@echo "Removed O-FILES"

fclean: clean 
	@/bin/rm -f $(NAME)
	@echo "Removed Executable file"

re: fclean all

.PHONY: all clean fclean re
