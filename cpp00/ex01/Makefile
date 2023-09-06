FLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDE = -I ./include

SRCS =  ./src/Contact.cpp \
		./src/PhoneBook.cpp \
		./src/Main.cpp

NAME = PhoneBook

OBJECT = $(SRCS:.cpp=.o)

COMPILER = c++

all: $(NAME)

%.o: %.cpp
	@echo "Linking..."
	@$(COMPILER) $(FLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJECT)
	@echo "Compiling..."
	@$(COMPILER) $(FLAGS) $(INCLUDE) $(OBJECT) -o $(NAME)
	@echo "Executable ./$(NAME)"

clean:
	@/bin/rm -f $(OBJECT)
	@echo "Removed O-FILES"

fclean: clean 
	@/bin/rm -f $(NAME)
	@echo "Removed Executable file"

re: fclean all

.PHONY: all clean fclean re
