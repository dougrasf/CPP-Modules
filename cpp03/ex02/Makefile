FLAGS = -Wall -Wextra -Werror -std=c++98 -g

INCLUDE = -I .

SRCS =  main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \

NAME = FragTrap

OBJECT = $(SRCS:.cpp=.o)

COMPILER = c++

all: $(NAME)

$(NAME): $(OBJECT)
	@echo "Executable ./$(NAME)"

%.o: %.cpp
	$(COMPILER) $(FLAGS) $(INCLUDE) $(SRCS) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECT)
	@echo "Removed O-FILES"

fclean: clean 
	@/bin/rm -f $(NAME)
	@echo "Removed Executable file"

re: fclean all

.PHONY: all clean fclean re
