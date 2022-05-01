NAME = DiamondTrap

RESET		=	\033[0m
GREEN		=	\033[32m
YELLOW		=	\033[33m
BLUE		=	\033[34m
RED			=	\033[31m
UP			=	\033[A
CUT			=	\033[K


SRC_DIR		=	Source/
OBJ_DIR		=	obj/

SRC_FILES =	ClapTrap.cpp main.cpp ScavTrap.cpp DiamondTrap.cpp FragTrap.cpp

OBJ_FILES = $(SRC_FILES:.cpp=.o)

SRC	= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ	= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

CXX = @g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW)Compiling [$(NAME)]...$(RESET)"
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Finished [$(NAME)]$(RESET)"

$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling [$@]...$(RESET)"
	@$(CXX) $(CXXFLAGS) -I Include/ -o $@ -c $<
	@printf "$(UP)$(CUT)"
	@echo "$(GREEN)Finished [$@]$(RESET)"
	@printf "$(UP)$(CUT)"

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
    	rm -rf $(OBJ_DIR); \
    	echo "$(BLUE)Deleting all objects...$(RESET)"; \
    	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
    	rm -rf $(NAME); \
    	echo "$(BLUE)Deleting $(NAME)...$(RESET)"; \
    	fi;

re: fclean all

.PHONY: all clean fclean re