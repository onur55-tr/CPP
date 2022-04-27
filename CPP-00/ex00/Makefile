# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odursun <odursun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 15:30:59 by odursun           #+#    #+#              #
#    Updated: 2022/04/17 15:58:17 by odursun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = Megaphone.cpp

OBJS = $(SRC:.cpp=.o)

CXX = @g++

CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXFLAGS) $(OBJS) -o $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
test: $(NAME)
				./megaphone "shhhhh... I think the students are asleep..."
				./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
				./megaphone
.PHONY: all clean fclean re test