NAME = harlFilter

SRC = $(wildcard Source/*cpp)

OBJ = $(SRC:.cpp=.o)

CXX = @g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

#KEY = -D WARNING -D DEBUG -D INFO -D ERROR

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re